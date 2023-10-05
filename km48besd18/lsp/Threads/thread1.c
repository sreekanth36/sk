
#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

void *thread_fun(void *arg);
int var=5;
// main thread
int main()
{
	int ret;
	pthread_t temp;
	void *retval;

	ret = pthread_create(&temp,NULL,thread_fun,NULL);
	if (ret < 0) {
		perror("pthread_create fail");
		exit(0);
	}

	ret = pthread_join(temp,&retval);
	if (ret < 0) {
		perror("pthread_create fail");
		exit(0);
	}
	printf("ret val:%s\n",(char *)retval);
	printf("var:%d\n",var);
}


// thread_fun
void *thread_fun(void *arg)
{
	var=7;
	sleep(5);
	pthread_exit("thread fun done");
}

