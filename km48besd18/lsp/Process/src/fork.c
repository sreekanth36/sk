#include<stdio.h>
#include<unistd.h>

main()
{
	pid_t pid;
	
	pid = fork();
	pid = fork();
	pid = fork();
	
	printf("Hello World\n");

}
