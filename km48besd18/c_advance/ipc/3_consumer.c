#include"sk.h"
void consumer(int sig);
char *shmad=0;
int main()
{
	int shmid=0;
//	sscanf(argv[1],"%d",&shmid);
//	printf("%d\n",shmid);
	shmad=shmat(0,0,0);
//	printf("shmad=%p partid=%d chid=%d\n",shmad,getppid(),getpid());
	(void) signal(SIGUSR2,consumer);
	kill(getppid(),SIGUSR1);
	while(1)
	{
		printf("hello\n");
		pause();
	}
}
void consumer(int sig)
{
	printf("con\n");
	char sk[10]={0};
	for(int i=0;i<10;i++)
		sk[i]=shmad[i];
	printf("==> consumer <==\n   %s\n",sk);
	sleep(1);
	kill(getppid(),SIGUSR1);
}
