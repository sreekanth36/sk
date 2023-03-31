#include"sk.h"
char *pro1=0;
int main()
{
int shmid;
	shmid=shmget(9,5,0);
	printf("%d\n",shmid);
	getchar();
//	shmdt(shmid);
	shmctl(shmid,IPC_RMID,0);
}
/*void dismiss(int sig)
{
	int i;
	{
		shmdt(pro1);
		shmctl(shmid,IPC_RMID,0);
		sem_unlink(sk);
		wait(&i);
	}
	(void) signal(SIGINT,SIG_DFL);
//	kill(getpid(),SIGINT);
}*/
