/* dup2() system call example */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main()
{
	int fd;
	fd = open("abc",O_WRONLY);
	if (fd < 0) {
		perror("Open FAIL");	
		exit(errno);
	}
	
	dup2(fd,1); //int dup2(int oldfd, int newfd); duplicate a fd is new one i.e 1
	printf("Kernel Masters\n");
}
