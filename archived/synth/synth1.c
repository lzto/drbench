/*
 * Replay synthetic benchmark 1
 *
 * Interleave system calls, pthread operations, private memory writes,
 * and shared memory writes.
 */
#define _GNU_SOURCE
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
#include <errno.h>
#include <stdarg.h>
#include <math.h>

#define ACT_LEN	6

#define DEF_THREADS		1
#define DEF_EVENTS		100000
#define PR_MEM_PAGES		10240
#define DEF_SH_MEM_PAGES	10240
#define FACTOR			9946449

#define PAGE_SIZE 4096
#define RAND_SIZE 32


/* Replay doesn't yet like normal printfs, so we turn them into
 * writes. */
int printf(const char *format, ...) {
    char printf_buf[1024];
    va_list arg;
    int done;

    va_start(arg, format);
    done = vsnprintf(printf_buf, sizeof(printf_buf), format, arg);
    done = write(1, printf_buf, done);
    va_end(arg);

    return done;
}
int puts(const char *str) {
    return printf("%s\n", str);
}


struct thread_args;
struct action {
    int weight;
    void (*fn)(struct thread_args *args, int x);
};

struct thread_args {
    int id;
    int max_events;
    char *pmem;
    int pmem_last;
    struct random_data rand;
    char rand_state[RAND_SIZE];
    pthread_t thread;
    struct action actions[ACT_LEN];
};

static inline int MIN(int x, int y) {
    return (x < y) ? x : y;
}
static inline int MAX(int x, int y) {
    return (x > y) ? x : y;
}

void shuffle(int *vector, int size, struct random_data *rand) {
    int i;
    for (i = size-1; i > 0; i--) {
	int32_t rres;
	random_r(rand, &rres);
	int j = rres % (i+1);
	int tmp = vector[j];
	vector[j] = vector[i];
	vector[i] = tmp;
    }
}

int sum_weights(struct action *actions) {
    int sum = 0;
    int i;
    for (i = 0; i < ACT_LEN; i++)
	sum += actions[i].weight;
    return sum;
}

u_int64_t inline rdtsc() {
    volatile union {
	struct {
	    u_int32_t l;
	    u_int32_t h;
	} w32;
	u_int64_t w64;
    } v;

  __asm __volatile (".byte 0xf; .byte 0x31     # RDTSC instruction"
                    : "=a" (v.w32.l), "=d" (v.w32.h) :);
  return v.w64;
}

void __attribute__((noinline)) clear_stack() {
    char buf[128];
    memset(buf, 0, sizeof(buf));
}


/*
 * Schedules events by randomly shuffling them in batches. Guarantees
 * that each event will happen roughly the same number of times, but
 * the exact order is random.  Multiple threads will behave
 * differently.
 */
void *thread_shuffle(void *user)
{
    struct thread_args *args = (struct thread_args*) user;
    int remaining = args->max_events;
    int i, j;

    int total_events = sum_weights(args->actions);
    if (total_events == 0)
	return;
    
    int *batch = malloc(total_events * sizeof(int));
    for (i = 0, j = 0; i < ACT_LEN; i++) {
	int num = args->actions[i].weight;
	while (num-- > 0)
	    batch[j++] = i;
    }

    while (remaining > 0) {
	shuffle(batch, total_events, &args->rand);
	int count = MIN(total_events, remaining);
	for (i = 0; i < count; i++) {
	    args->actions[batch[i]].fn(args, remaining);
	}
	remaining -= count;
    }
    free(batch);
}

/*
 * Schedules events by lottery.  Random number and order.
 */
void *thread_lottery(void *user) {
    struct thread_args *args = (struct thread_args*) user;
    int remaining = args->max_events;
    int i, j;

    int total_events = sum_weights(args->actions);
    if (total_events == 0)
	return;
    
    int *batch = malloc(total_events * sizeof(int));
    for (i = 0, j = 0; i < ACT_LEN; i++) {
	int num = args->actions[i].weight;
	while (num-- > 0)
	    batch[j++] = i;
    }

    while (remaining-- > 0) {
	int32_t rres;
	random_r(&args->rand, &rres);
	i = rres % total_events;
	args->actions[batch[i]].fn(args, remaining);
    }
    free(batch);
}


/*
 * Thread Actions
 */
#include <sys/resource.h>
void do_syscall(struct thread_args *args, int x) {
    gettimeofday(NULL, NULL);
}

void do_pthread(struct thread_args *args, int x) {
    pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
    pthread_mutex_lock(&mutex);
}

void do_prmem(struct thread_args *args, int x) {
    int page = args->pmem_last % PR_MEM_PAGES;
    int off  = (args->pmem_last / PR_MEM_PAGES) % PR_MEM_PAGES;
    args->pmem[PAGE_SIZE * page + off] = x;
    args->pmem_last++;
}

/* Each thread accesses a random page (but unique offset) in the whole
 * region.  To vary the probability of a conflict, adjust the size and
 * number of threads */
char *shmem = NULL;
int shmem_pages = DEF_SH_MEM_PAGES;

void do_shmem(struct thread_args *args, int x) {
    int32_t rres;
    random_r(&args->rand, &rres);
    int page = rres % shmem_pages;
    shmem[PAGE_SIZE * page + args->id] = x;
}

void do_compute(struct thread_args *args, int x) {
    const u_int64_t N = FACTOR;
    u_int64_t a  = ceil(sqrt(N));
    u_int64_t b2 = a*a - N;
    u_int64_t b  = ceil(sqrt(b2));
    while (b*b != b2) {
	a++;
	b2 = a*a - N;
	b = ceil(sqrt(b2));
    }
}

void __attribute__((noinline)) __do_race(struct thread_args *args) {
    u_int64_t clock = rdtsc();
    if ((clock % 10) == 0)
	((u_int64_t *) args->pmem)[0] = clock;
}

void do_race(struct thread_args *args, int x) {
    volatile int i;
    __do_race(args);
    clear_stack();
}

/*
 * Main
 */
#ifdef SPEC_ENABLE
#include "util.h"
static void begin_replay() {
    int err, fd;
    err = devspec_init(&fd);
    if (err) {
	printf("devspec_init error: %s\n", strerror(err));
	exit(1);
    }
    pthread_log_t *log = pthread_log_init(1);
    if (!log) {
	printf("pthread_log_init error\n");
	exit(1);
    }
    malloc_log_init(pthread_log_lock,
		    pthread_log_trylock,
		    pthread_log_unlock);
    stdio_log_init(pthread_log_lock,
		   pthread_log_trylock,
		   pthread_log_unlock);
    err = replay_fork(fd, 0, (u_long) log, sizeof(*log));
    if (err) {
	printf("replay_fork error: %s\n", strerror(err));
	exit(1);
    }
}
#else
static inline void begin_replay() {}
#endif

static const char *ord_names[] = {"det", "shuffle", "rand"};

void usage(char *name) {
    printf("Usage: %s OPTIONS\n"
	   "\nAssign relative weights to the different operations:\n"
	   "  -s   System calls (stat)\n"
	   "  -p   pthread operations (mutex_lock)\n"
	   "  -r   Private memory writes\n"
	   "  -m   Shared memory writes (not racy)\n"
	   "  -c   Computation\n"
	   "  -e   Race with probability 10%\n"
	   "\nSpecifying length:\n"
	   "  -a   Number of actions per thread\n"
	   "  -b   Number of batches (defined by weights) per thread\n"
	   "\nOther options:\n"
	   "  -t   Number of threads\n"
	   "  -g   Number of shared memory pages\n"
	   "  -o   Select the action ordering strategy for each thread:\n"
	   "         'shuffle' Shuffle actions within each round [default]\n"
	   "         'rand'    Fully random\n\n",
	   basename(name));
    exit(1);
}

int main(int argc, char **argv)
{
    int nthreads = DEF_THREADS;
    struct thread_args def;
    struct action def_act[ACT_LEN] = {
	{0, do_syscall}, {0, do_pthread}, {0, do_prmem},
	{0, do_shmem}, {0, do_compute}, {0, do_race}};
    int c, i, ret;
    void *(*thread_main)(void *) = thread_shuffle;
    int thread_choice = 1;
    u_int actions = 0;
    u_int batches = 0;
    memset(&def, 0, sizeof(def));

    while ((c = getopt(argc, argv, "s:p:r:m:c:e:t:a:b:g:o:h")) != -1) {
	switch(c) {
	case 's':	def_act[0].weight = atoi(optarg); break;
	case 'p':	def_act[1].weight = atoi(optarg); break;
	case 'r':	def_act[2].weight = atoi(optarg); break;
	case 'm':	def_act[3].weight = atoi(optarg); break;
	case 'c':	def_act[4].weight = atoi(optarg); break;
	case 'e':	def_act[5].weight = atoi(optarg); break;
	case 'a':	actions = atoi(optarg); batches = 0; break;
	case 'b':	batches = atoi(optarg); actions = 0; break;
	case 't':	nthreads = atoi(optarg); break;
	case 'g':	shmem_pages = atoi(optarg); break;
	case 'o':
	    if (!strcmp(optarg, "shuffle")) {
		thread_main = thread_shuffle;
		thread_choice = 1;
	    } else if (!strcmp(optarg, "rand")) {
		thread_main = thread_lottery;
		thread_choice = 2;
	    } else {
		printf("Valid ordering strategies: shuffle, rand\n");
		exit(1);
	    }
	    break;
	default:
	    printf("Unrecognized argument -%c\n", c);
	case '?':
	case 'h':
	    usage(argv[0]);
	}
    }
    if (argc == 1 || argc != optind)
	usage(argv[0]);

    if (actions > 0)
	def.max_events = actions;
    else if (batches > 0)
	def.max_events = sum_weights(def_act) * batches;
    else
	def.max_events = DEF_EVENTS;
    memcpy(def.actions, def_act, sizeof(def_act));
    shmem = malloc(PAGE_SIZE * shmem_pages);
    struct thread_args *args = malloc(nthreads * sizeof(struct thread_args));

    printf("Running %d/%d/%d/%d/%d/%d actions=%d threads=%d ", def_act[0].weight,
	   def_act[1].weight, def_act[2].weight, def_act[3].weight,
	   def_act[4].weight, def_act[5].weight, def.max_events, nthreads);
    if (def_act[3].weight > 0)
	printf("shmem=%d ", shmem_pages);
    printf("ord=%s\n", ord_names[thread_choice]);
    fflush(stdout);

    begin_replay();

    for (i = 0; i < nthreads; i++) {
	memcpy(&args[i], &def, sizeof(def));
	args[i].id = i;
	args[i].pmem = malloc(PAGE_SIZE * PR_MEM_PAGES);
	initstate_r(i, args[i].rand_state, RAND_SIZE, &args[i].rand);
	ret = pthread_create(&args[i].thread, NULL, thread_main, &args[i]);
	if (ret) {
	    fprintf(stderr, "creating thread %d: %s\n", i, strerror(errno));
	    return -1;
	}
    }

    for (i = 0; i < nthreads; i++)
	pthread_join(args[i].thread, NULL);

    printf("Done\n");
    return 0;
}
