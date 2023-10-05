#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr=NULL;
    pid_t pid;
    char *message;
    int n, exit_code;

    printf("fork program starting\n");
    pid = fork();
    switch(pid) 
    {
    case -1:
        perror("fork failed");
        exit(1);
    case 0:
        message = "This is the child";
        n = 5;
	exit_code = 37;
        break;
    default:
        message = "This is the parent";
        n = 3;
	exit_code = 0;
        break;
    }

    for(; n > 0; n--) {
        puts(message);
        sleep(1);
    }
if (pid == 0)
{
//	printf("%d\n",*ptr);
}
if (pid != 0) {
	int stat_val;
	pid_t child_pid;
	child_pid = wait(&stat_val);
	printf("Child has finished: PID = %d\n", child_pid);

	if(WIFEXITED(stat_val)) 
	{
		printf("Child terminated normally\n");
		printf("Child exited with code %d\n", WEXITSTATUS(stat_val));
		printf("Upper Byte %d\n", stat_val>>8);
	}
	else
	{
		printf("Child terminated abnormally\n");
		printf("Child exited with code %d\n", WEXITSTATUS(stat_val));
		printf("Lower Byte %d\n", stat_val&(0x00FF) );
	}
}

exit(exit_code);
}

