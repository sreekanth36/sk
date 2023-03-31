
//5. Write a program your own version of system() library? 

#include"sk.h"

int main(int a, char *argv[])
{
	char sk[200];
	int s,x;
//	scanf(" %[^\n]s",sk);
	s=fork();
	if(s==0)
	{
//	char *argv=sk;
	execl("/bin/sh","sh","-c",argv[1],NULL);
	exit(0);
	}
	if(s!=0)
	{
		wait(&x);
	}
	return 0;
}
