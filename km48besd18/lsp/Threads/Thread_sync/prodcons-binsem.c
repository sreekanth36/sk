#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>


void *producer(void *arg);
void *consumer(void *arg);
//int counter = 0;
sem_t prod,cons;
char buffer[5];

int main() {
    int res;
    pthread_t a_thread,b_thread;
    void *thread_result;

    sem_init(&prod,0,1); // prod=1
    sem_init(&cons,0,0);// cons=0

    res = pthread_create(&a_thread, NULL, producer, NULL);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }

    res = pthread_create(&b_thread, NULL, consumer, NULL);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }
    printf("Wait for pthread_join\n");
    res = pthread_join(a_thread, &thread_result);
    if (res != 0) {
        perror("Thread join failed");
        exit(EXIT_FAILURE);
    }
    res = pthread_join(b_thread, &thread_result);
    if (res != 0) {
        perror("Thread join failed");
        exit(EXIT_FAILURE);
    }
    printf("Thread joined\n");
    exit(EXIT_SUCCESS);
}

void *producer(void *arg) {
    int i,in = 0; 
    char ch='A';
    while(1)
	{
	//	printf ("producer: counter:%d\n",counter); 
		//while(counter == 5);
		
		sem_wait(&prod);
			for(i=0;i<5;i++) {
			buffer[in]=ch;
			ch++;in++;
			}
			in=0; ch='A';
			printf("p:%s\n",buffer);
		sem_post(&cons);
		//counter++;
	}
	
   pthread_exit("exit");	
}
void *consumer(void *arg) {
    int i,out = 0;
    char data[5];
    while(1)
	{
		//while(counter == 0);
		sem_wait(&cons);
			for(i=0;i<5;i++) {
			data[out] = buffer[out];
			out++;
			}
			out=0;		
			printf ("\t:c:%s\n",data); 
		sem_post(&prod);
		//counter--;
	}
   pthread_exit("exit");	
}
