//6. Write a program your own version of shell? 

#include"sk.h"

int main()
{
	char sk[50];
	pid_t child_pid;
	while(1)
	{
		printf("$ ");
		scanf(" %[^\n]49s",sk);
		if(strcmp(sk,"exit")==0)
			break;
		char *argv=sk;
		child_pid=fork();
		if(child_pid==0)
		{
			execl("/bin/sh","sh","-c",argv,NULL);
			exit(0);
		}
		if(child_pid!=0)
		{
			int s;
			pid_t a;
			a=wait(&s);
/*			printf("Child has finished: PID = %d\n",a);
			if(WIFEXITED(s))
				printf("Child exited with code %d\n", WEXITSTATUS(s));
			else
				printf("Child terminated abnormally\n");*/
		}
	}
}
