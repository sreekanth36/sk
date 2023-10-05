#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

//The sigaction() system call is used to change the 
//action taken by a process on receiving a specific signal.

void new_action(int signum)
{
        printf("\nHey!! I got the signal %d\n",signum);
	sleep(10);
	printf("done\n");
}

int main()
{
        struct sigaction action;
                                /*struct sigaction {
                                        void     (*sa_handler)(int);    //function pointer to a signal catching function or one of the macros SIG_IGN or SIG_DFL
                                        void     (*sa_sigaction)(int, siginfo_t *, void *);     //pointer to a signal catching function
                                        sigset_t   sa_mask;             //Additional set of signals to be blocked during execution of signal catching function
                                        int        sa_flags;            //Special flags to affect behaviour of signal
                                        void     (*sa_restorer)(void);
                                        };                                      */

        action.sa_handler = &new_action;
	sigemptyset(&action.sa_mask);
//	sigaddset(&action.sa_mask, SIGTSTP);
	action.sa_flags = 0;
	if(sigaction(SIGINT, &action, NULL)==-1)	//int sigaction(int signum, const struct sigaction *act, struct sigaction *oldact);
	{
		printf("sigaction fail\n");
		exit(1);
	}
	while(1)
	{
		printf("Hello World!\n");
		sleep(1);
	}
        
}

