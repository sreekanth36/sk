#include<string.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc,char * argv[])
{
	int s,i;
	write(1,argv[1],1);
	printf("\n");
}
