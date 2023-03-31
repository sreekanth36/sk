1. What is a zombie process? What is an orphan process? WAP to create a zombie process?

"ORPHAN PROCESS":
When a process forks and the parent process exits before the child, an inconsistency results 
in the kernel's task structures (where all process information is stored). The inconsistency is 
with regard to the PPID of the child - since the parent has died, the PPID now in the child's 
task structure is invalid.
The kernel exit cleanup code corrects this inconsistency, setting the child's PPID to that of 
the init process (always having a PID of 1), in effect re-parenting the child. This is clever as 
the init process (now the parent) “cannot” die – init dies only when the system is shutting 
down. Hence the situation cannot recur.
Since the child lost it's immediate parent, it is termed an orphaned process.



"ZOMBIES":
When a process forks and the child process terminates, the child's internal task structure 
information is maintained within the kernel (even though the child is technically "dead"). 
The reason that the kernel keeps the information is for the parent process to "fetch" it. The 
parent process should (is expected to) fetch the child's status information by doing a wait() 
on for the child process. Only then does the kernel release the child's context information 
and the child is truly dead.
Typically, the parent process would, after forking, wait for the child to terminate (directly or 
indirectly).
If, however, the parent process does not bother to wait for it's child (for whatever reason), 
then, when the child dies, it's task information is still maintained in the kernel. The state of 
the child process now is neither completely dead
/*#include <sys/types.h>
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
*/
