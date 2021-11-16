#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <malloc.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#define ARR_SIZE 1

struct data {
    int id;
    int count;
    int *ptr[ARR_SIZE];
};

void *do_allocate (void *arg)
{
    struct data *d = (struct data*) arg;
    int size = 0;
    do {
	do {
	    size = rand() + 1234567;
	} while (size < 0);

	d->ptr[d->count] = (int *) malloc (size);
	if (d->ptr[d->count]) {
	    d->count++;
	    printf ("Thread %d: count: %d, size requested: %d\n", d->id, d->count, size);
	}
	if (d->count == ARR_SIZE) {
	    break;
	}
    } while (1);
}

// Replay
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
#elif defined(NOREPLAY_ENABLE)
static void begin_replay() {
	syscall(53);
}
#elif defined(FORK_ENABLE)
static void begin_replay() {
	//measure runtime only for parent process
	if(fork()>0) syscall(53);
}
#else
#define begin_replay()
#endif

int main ()
{
    begin_replay();
    pthread_t thread0, thread1;
    struct data d0, d1;

    // Initialize struct
    d0.count = 0;
    d0.id = 0;
    d1.count = 0;
    d1.id = 1;
    
    pthread_create (&thread0, NULL, do_allocate, &d0);
    pthread_create (&thread1, NULL, do_allocate, &d1);
    pthread_join (thread0, NULL);
    pthread_join (thread1, NULL);
    return 0;
}
