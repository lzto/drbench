#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <pthread.h>

#define NUM_OF_THREAD 8

pthread_mutex_t lock;

long *s;
//long s;

void *
thread_start (void *arg)
{
	for(int j=0;j<1000;j++)
	for(int i=0;i<100;i++)
	{
		//s++;
		//(*s)++;
		//pthread_mutex_lock(&lock);
		(*s)=(*s)+1;
		//pthread_mutex_unlock(&lock);
	}
    return (NULL);
}


int main (int argc, char* argv[])
{
    int fd, rc;
    int i;

    pthread_mutex_init(&lock, NULL);
    s = (long*)malloc(sizeof(long));
    printf("shared p = %p, &p = %p\n",s,&s);
    pthread_mutex_lock(&lock);
    *s=0;
//    s=0;
    pthread_mutex_unlock(&lock);

    pthread_t tid[NUM_OF_THREAD];

    for(i=0;i<NUM_OF_THREAD;i++)
    {
    	pthread_create (&tid[i], NULL, thread_start, NULL );
    }

    for(i=0;i<NUM_OF_THREAD;i++)
    {
    	pthread_join(tid[i],NULL);
    }
    //pthread_mutex_lock(&lock);
	printf("%ld\n",*s);
    //pthread_mutex_unlock(&lock);
	//printf("%ld\n",s);
    pthread_mutex_destroy(&lock);
    return 0;
}

