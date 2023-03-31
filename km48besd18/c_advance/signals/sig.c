#include"sk.h"

void *prdsk(void *arg);
void prdsg(int sig);
void *cussk(void *arg);
void cursg(int sig);
char buff[10];
pthread_t prd,cus;
int main()
{
	int ret;
	void *returnp;
	ret=pthread_create(&prd,NULL,prdsk,NULL);
	if (ret != 0) 
		perror("Thread creation failed");
	ret=pthread_create(&cus,NULL,cussk,NULL);
	if (ret != 0) 
		perror("Thread creation failed");
	ret = pthread_join(prd, &returnp);
	if (ret != 0) 
		perror("Thread join failed");
	ret = pthread_join(cus, &returnp);
	if (ret != 0) 
		perror("Thread join failed");
	return 0;
}

void *prdsk(void *arg)	// Producer Thread
{
//	printf("he\n");
	(void) signal(SIGUSR1,prdsg);
//	printf("hello\n");
	while(1)
	{
		pause();
	}
	pthread_exit("hello");
}
void prdsg(int sig)	// Producer Signal Handler
{
	int i;
	printf("==> producer <==\n");
	for(i=0;i<10;i++)
		buff[i]=i+48;
	printf("   %s\n",buff);
	pthread_kill(cus,SIGUSR2);	// Signal raise to consumer
//	i=gettid();	tkill(i+1,SIGUSR2);
}
void *cussk(void *arg)	// Consumer Thread
{
//	printf("hp\n");
	(void) signal(SIGUSR2,cursg);
//	printf("hello\n");
	pthread_kill(prd,SIGUSR1);	// Intial Signal raise to Producer
//	printf("he\n");
	while(1)
	{
		pause();
	}
}
void cursg(int sig)	// Consumer Signal Handler
{
	int i;
	char sk[10];
	printf("==> consumer <==\n");
	for(i=0;i<10;i++)
		sk[i]=buff[i];
	printf("   %s\n\n",sk);
	sleep(1);
//	printf("he\n");
	pthread_kill(prd,SIGUSR1);	// Signal raise to Producer
//	i=gettid();	tkill(i-1,SIGUSR1);
}
