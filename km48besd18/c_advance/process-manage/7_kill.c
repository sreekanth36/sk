// 7. Write a program your own kill command

#include"sk.h"

int main(int argc,char *argv[])
{
	argv[0]="kill";
	execve("/bin/kill",argv,NULL);
}

	
	
/* void ownkill(int ck, int ak);
int main(int argc,char *argv[])
{		
	int i=0,ak=0,ck;
	ck=atoi(argv[1]);
	for (i=2;argc>i;i++)
	{
		ak=atoi(argv[i]);
		ownkill(ck,ak);
	}
	return 0;	
}

void ownkill(int ck, int ak)
{	
	int a=0,sk;
	pid_t cpid=fork();	
	if (cpid==0)
	{
		a=kill(ak,ck);
		if (a<0)
			perror("function fail");
		exit(0);
	}
	else
		wait(&sk);
}*/ 


