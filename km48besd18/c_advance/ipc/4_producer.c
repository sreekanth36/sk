#include"sk.h"
void producer(void);
void tata(int sig);
int shmid;
const char *sk="hellosema";
char *shmad=0;
sem_t *semad=0;
int main()
{
	(void) signal(SIGINT,tata);
	shmid=shmget(8,5,0666|IPC_CREAT);
//	shmid=shmget(8,5,0);
	printf("%d\n",shmid);
	getchar();
	shmad=shmat(shmid,0,0);
	while(1)
	{
		semad=sem_open(sk,O_CREAT,0666,1);
		sem_wait(semad);
		producer();
		sem_post(semad);
		sem_close(semad);
	}
}
void producer(void)
{
	for(int i=0;i<5;i++)
		shmad[i]=i+48;
	printf("==> producer <==\n     %s\n",shmad);
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
