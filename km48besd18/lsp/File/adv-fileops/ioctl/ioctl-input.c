// Write a program to findout input device name 

#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <linux/input.h>

int main(int argc, char *argv[])
{
	int fd1,retfd;
	char buf[4096];
	int val;
	char name[256] = "Unknown";

	fd1=open(argv[1],O_RDONLY);
	if(fd1<0)
	{
		perror("Open Fails");
		return -1;
	}
        ioctl(fd1, EVIOCGNAME(sizeof(name)), name);
        printf("Input device name: \"%s\"\n", name);

	return 0;
}
		
