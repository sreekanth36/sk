#include<string.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char * argv[])
{
	int i,c;
	for(i=1;i<argc;i++)
	{
		write(1,argv[i],strlen(argv[i]));
		write(1," ",1);
//		printf("%s\n",argv[i]);
	}
	printf("\n");
	return 0;
}
