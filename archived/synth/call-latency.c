/*
 * Measure the time spent in the kernel on a per-thread basis.
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

static inline u_long tv_diff(struct timeval *tv1,
			     struct timeval *tv2)
{
    return (tv1->tv_sec - tv2->tv_sec)*1000000 +
	(tv1->tv_usec - tv2->tv_usec);
}


/*
 * Main
 */
#ifdef SPEC_ENABLE
#include "util.h"
void begin_replay() {
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
    err = replay_fork(fd, 0, (u_long) log, sizeof(*log));
    if (err) {
	printf("replay_fork error: %s\n", strerror(err));
	exit(1);
    }
}
#else
static inline void begin_replay() {}
#endif

void usage(char *name) {
    printf("Usage: %s outfile [count]\n",
	   basename(name));
    exit(1);
}

int main(int argc, char **argv)
{
    int i;
    int count = 10000;
    u_long *time_array;

    if (argc == 3) {
	count = atoi(argv[2]);
	if (argc <= 0)
	    usage(argv[0]);
    } else if (argc != 2)
	usage(argv[0]);

    time_array = calloc(count, sizeof(u_long));

    begin_replay();

    FILE *outfile = fopen(argv[1], "w");
    if (!outfile) {
	printf("error opening %s: %s\n", argv[1], strerror(errno));
	exit(1);
    }

    struct timeval tv1, tv2;
    struct timeval start, end;
    gettimeofday(&tv1, 0);
    start = tv2 = tv1;

    for (i = 0; i < count; i++) {
	gettimeofday(&tv2, 0);
	time_array[i] = tv_diff(&tv2, &tv1);
	tv1 = tv2;
    }
    end = tv2;

    for (i = 0; i < count; i++)
	fprintf(outfile, "%lu\n", time_array[i]);

    fclose(outfile);

    printf("Total %f sec for %d iterations\n",
	   tv_diff(&end, &start)/1e6, count);

    exit(0);
}
