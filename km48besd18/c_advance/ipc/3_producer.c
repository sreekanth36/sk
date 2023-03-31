#include"sk.h"
void dismiss(int sig);
void producer(int sig);
int shmid;
int a=0;
char *shmad=0;
int main()
{
	(void) signal(SIGINT,dismiss);
	int i=0;
//	char sk[5]={0};
	shmid=shmget(3,10,0666|IPC_CREAT);
	shmad=shmat(shmid,0,0);
/*	sk[0]=0;
	for(i=shmid;i;a++)
		i=i/10;
	for(a--,i=shmid;i;a--)
	{
		sk[a]=i%10;
		i=i/10;
	}
	const char *sk1=sk;*/
//	shmctl(0,IPC_RMID,0);
	a=fork();
	printf("%d\n",shmid);
//	printf("shmad=%p partid=%d child=%d\n",shmad,getpid(),a);
	if(a<0)
		perror("fork failed");
	else if(a)
	{
		(void) signal(SIGUSR1,producer);
		while(1)
		{
//			printf("he\n");
			pause();
		}
	}
	else
		execlp("./consumer","./consumer",0);
//		execlp("sh","sh","-c","./consumer",0);
return 0;
}
void producer(int sig)
{
//	printf("pro\n");
	int i;
	for(i=0;i<10;i++)
		shmad[i]=i+48;
	printf("==> producer <==\n   %s\n",shmad);
	sleep(1);
	kill(a,SIGUSR2);
}
void dismiss(int sig)
{
	int i;
	if(a>0)
	{
//		sem_unlink(sk);
		wait(&i);
	}

		shmdt(shmad);
		shmctl(shmid,IPC_RMID,0);
	(void) signal(SIGINT,SIG_DFL);
	kill(getpid(),SIGINT);
}
