#include"sk.h"
const char *sk="sk3sema";
int shmid,a;
char *pro1=0;
sem_t *semad=0;
void dismiss(int sig);
void producer(void);
void consumer(void);
int main()
{
	(void) signal(SIGINT,dismiss);
//	shmctl(0,IPC_RMID,0);
//	shmdt(pro1);
//	sem_unlink(sk);
	shmid=shmget(4,5,0666|IPC_CREAT);
	if(shmid<0)
		perror("shmid failed");
//	semad=sem_open(sk,O_CREAT,0666,1);
	pro1=shmat(shmid,0,0);
//	printf("p=%p id=%d\n",pro1,shmid);
	a=fork();
	if(a<0)
		perror("fork fails");
	else if(a)
		producer();
	else
		consumer();
}
void producer(void)
{
	static int c=0;
	int i,a=0;
	while(1)
	{
		semad=sem_open(sk,O_CREAT,0666,1);
//		printf("he\n");
//		sleep(1);
		if(c==0)
		{
			i=0;
			c=1;
			a=0;
		}
		else
		{
			c=0;
			i=5;
			a=0;
		}
		sem_wait(semad);
		for(;a<5;a++,i++)
		*(pro1+a)=i+48;
		printf("==> producer <==\n     %s\n",pro1);
		sleep(1);
		sem_post(semad);
		sem_close(semad);
//		sem_unlink(sk);
	}
}
void consumer(void)
{
	char sk1[5]={0};
	while(1)
	{
	semad=sem_open(sk,O_CREAT,0666,1);
//		printf("hello\n");
//		sleep(1);
		sem_wait(semad);
		for(int i=0;i<5;i++)
			sk1[i]=pro1[i];
		printf("==> consumer <==\n     %s\n",sk1);
		sleep(1);
		sem_post(semad);
		sem_close(semad);
//		sem_unlink(sk);
	}
}
void dismiss(int sig)
{
	int i;
	if(a>0)
	{
		shmdt(pro1);
		shmctl(shmid,IPC_RMID,0);
		sem_unlink(sk);
		wait(&i);
	}
	(void) signal(SIGINT,SIG_DFL);
	kill(getpid(),SIGINT);
}
