#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>


int main()
{
    pid_t pid;
    char *message;
    int n;

    printf("fork program starting\n");
    pid = fork();
    switch(pid) 
    {
    case -1:
        perror("fork failed");
        exit(1);
    case 0:
        message = "This is the child";
	printf ("child PID:%d Child PPID:%d\n",getpid(),getppid());
        n = 3;
        break;
    default:
        message = "This is the parent";
	printf ("Parent PID:%d Parent PPID:%d\n",getpid(),getppid());
	n = 5;
	while(1);
        break;
    }

    for(; n > 0; n--) {
        puts(message);
        sleep(1);
    }
/*	if (pid != 0){ getchar();}
	if (pid != 0) {
	int stat_val;
        pid_t child_pid;
        child_pid = wait(&stat_val);
	
        printf("Child has finished: PID = %d\n", child_pid);

        if(WIFEXITED(stat_val))
                printf("Child exited with code %d\n", WEXITSTATUS(stat_val));
        else
                printf("Child terminated abnormally\n");
	}*/

//    exit(0);
}
