#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <pthread.h>
#include <math.h>

#define NUM_OF_THREAD 4

pthread_mutex_t lock;

//__attribute__((aligned(64))) long *s;
long *s;

void dumb_func()
{
}

void make_var_eq_0(long *s)
{
	*s = 0;
	dumb_func();
}

void reinit_x(long *s)
{
	pthread_mutex_lock(&lock);
	make_var_eq_0(s);
	pthread_mutex_unlock(&lock);
}


void *
thread_worker (void *arg)
{
	
	reinit_x(s);
	#ifdef FAST
	pthread_mutex_lock(&lock);
	#endif
	for(int j=0;j<1000;j++)
	{
		#ifdef MEDIUM
		pthread_mutex_lock(&lock);
		#endif
		for(int i=0;i<1000;i++)
		{
			#ifdef SLOW
			pthread_mutex_lock(&lock);
			#endif
			(*s)=(*s)+1;
			//(*s) = pow(*s,2);
			#ifdef SLOW
			pthread_mutex_unlock(&lock);
			#endif
		}
		#ifdef MEDIUM
		pthread_mutex_unlock(&lock);
		#endif
	}
	#ifdef FAST
	pthread_mutex_unlock(&lock);
	#endif
	return (NULL);
}

void init_x(long *s)
{
	pthread_mutex_lock(&lock);
	*s = 0;
	pthread_mutex_unlock(&lock);
	reinit_x(s);
	make_var_eq_0(s);
}

void dumpx(long *s)
{
	pthread_mutex_lock(&lock);
	printf("%ld\n",*s);
	pthread_mutex_unlock(&lock);
}

int main (int argc, char* argv[])
{
    int fd, rc;
    int i;

    pthread_mutex_init(&lock, NULL);
    s = (long*)malloc(64);
    make_var_eq_0(s);
    printf("shared p = %p, &p = %p\n",s,&s);
    init_x(s);
    reinit_x(s);
    /*
     *access shared variable in mt function
     */
    pthread_mutex_lock(&lock);
    *s=0;
//    s=0;
    pthread_mutex_unlock(&lock);

    pthread_t tid[NUM_OF_THREAD];

    for(i=0;i<NUM_OF_THREAD;i++)
    {
    	pthread_create (&tid[i], NULL, thread_worker, NULL );
    }

    for(i=0;i<NUM_OF_THREAD;i++)
    {
    	pthread_join(tid[i],NULL);
    }
    dumpx(s);
    /*
     * access shared variable in mt function
     */
    *s = 0xdeadbeef;
    printf("mt func access s=0x%lx\n",*s);
    pthread_mutex_destroy(&lock);
    return 0;
}

