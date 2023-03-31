#include"sk.h"
int a;
char *sk;
void producer(int sig);
int shmid;
void tata(int sig);
void consumer(int sig);
int main()
{
	(void) signal(SIGINT,tata);
	shmid=shmget(6,10,0666|IPC_CREAT);
	if(shmid<0)
		perror("shmget fails");
//	printf("%d\n",shmid);
	sk=shmat(shmid,0,0);
	a=fork();
	if(a<0)
	{
		perror("fork fails");
	}
	else if(a)
	{
		(void) signal(SIGUSR1,producer);
		while(1)
			pause();
	}
	else
	{
		(void) signal(SIGUSR2,consumer);
		kill(getppid(),SIGUSR1);
		while(1)
			pause();
	}
	shmdt(sk);
	shmctl(shmid,IPC_RMID,0);
}
void tata(int sig)
{
	int s;
	if(a>0)
	{
	shmdt(sk);
	shmctl(shmid,IPC_RMID,0);
	wait(&s);
	}
//	printf("enter one more time\n");
//	printf("%d\n",getpid());
//	kill(getpid(),SIGKILL);
	(void) signal(SIGINT,SIG_DFL);
	kill(getpid(),SIGINT);
}
void producer(int sig)
{
	int x;
	printf("==> producer <==\n");  
	for(x=0;x<10;x++)
	{
		sk[x]=x+48;
	}
	printf("   %s\n",sk);
	kill(a,SIGUSR2);
}
void consumer(int sig)
{
	int x;
	char sk1[10]={0};
	printf("==> consumer <==\n");
	for(x=0;x<10;x++)
	{
		sk1[x]=sk[x];
	}
	printf("   %s\n",sk1);
	sleep(1);
	kill(getppid(),SIGUSR1);
}
