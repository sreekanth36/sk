#include<string.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<dirent.h>

int main(int argc, char * argv[])
{
	int s,s1,i,c;
	char sk[4001];
	printf("%s %s\n",argv[1],argv[2]);
	if(argc != 3)
	{
		printf("Command Usage: skcp <src> <ds>\n");
		_exit(0);
	}
	if(strcmp(argv[1],argv[2]) == 0)
	{
		printf("cp: '%s' and '%s' are the same file\n",argv[1],argv[2]);
		_exit(0);
	}
	s = open(argv[1],O_RDONLY);
	if(s < 0)
	{
		printf("cat: %s: \n",argv[1]);
		perror("");
		_exit(0);
	}
	c = open(argv[2],O_WRONLY | O_CREAT,0644);
	if(c < 0)
	{
		printf("cat: %s: \n",argv[2]);
		perror("");
		_exit(0);
	}
	while(1)
	{
		s1 = read(s,sk,4000);
		if(s1<0)
		{
			printf("cat: %s: \n",argv[1]);
			perror("");
			break;
		}
		if(s1==0)
			break;
		write(c,sk,s1);
	}
	close(s);
	close(c);
}
