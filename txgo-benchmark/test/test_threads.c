#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <pthread.h>

#define NUM_OF_THREAD 2

pthread_mutex_t m;

void *
thread_start (void *arg)
{
//  sleep(2);
    write (0,"Spawned thread done\n",20);

    pthread_mutex_lock(&m);

    write (0,"Spawned thread don1\n",20);
    write (0,"Spawned thread don2\n",20);
    write (0,"Spawned thread don3\n",20);

    pthread_mutex_unlock(&m);

    return (NULL);
}


int main (int argc, char* argv[])
{
    int fd, rc;
    int i;
    pthread_t tid[NUM_OF_THREAD];

    for(i=0;i<NUM_OF_THREAD;i++)
    {
    	pthread_create (&tid[i], NULL, thread_start, NULL );
    }

    pthread_mutex_lock(&m);
    pthread_mutex_unlock(&m);

    write (0, "hello\n", 6); 

    //sleep(5);

    for(i=0;i<NUM_OF_THREAD;i++)
    {
    	pthread_join(tid[i],NULL);
    }

    return 0;
}
