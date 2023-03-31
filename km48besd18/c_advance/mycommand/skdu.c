#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc,char *argv[])
{
	int i,c;
	float s;
	struct stat sk;
	for(i=1;i<argc;i++)
	{
/*		s = open(argv[i],O_RDWR);
		if(s < 0)
		{
			printf("du: cannot access '%s': \n",argv[1]);
			perror("");
			continue;
		}*/
		c=stat(argv[i],&sk);
//		c=fstat(s,&sk);
		if(c<0)
			perror("");
//		printf("c=%d\n",c);
		s=sk.st_size;
//		if()
		printf("%.0f\t\t %s\n",s,argv[i]);
//		close(s);
	}
}
