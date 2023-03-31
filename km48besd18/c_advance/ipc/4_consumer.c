#include"sk.h"
void consumer(void);
void tata(int sig);
int shmid;
const char *sk="hellosema";
char *shmad=0;
sem_t *semad=0;
int main()
{
	(void) signal(SIGINT,tata);
//	shmid=shmget(8,5,0666|IPC_CREAT);
	shmid=shmget(8,5,0);
	printf("%d\n",shmid);
	getchar();
	shmad=shmat(shmid,0,0);
	while(1)
	{
		semad=sem_open(sk,O_CREAT,0666,1);
		sem_wait(semad);
		consumer();
		sem_post(semad);
		sem_close(semad);
	}
}
void consumer(void)
{
	char sk[5]={0};
	for(int i=0;i<5;i++)
		sk[i]=shmad[i];
//	printf("hello\n");
	printf("==> consumer <==\n     %s\n",sk);
	sleep(1);
}
void tata(int sig)
{
	shmdt(shmad);
	shmctl(shmid,IPC_RMID,0);
	sem_unlink(sk);
	(void) signal(SIGINT,SIG_DFL);
	kill(getpid(),SIGINT);
}
