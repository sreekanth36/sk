#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc,char * argv[])
{
	int s,i=1,a=1,c,q;
	char sk[4000]={0};
	int b=10;
	if(argc < 2)
	{
		printf("Command Usage: sktail <filename>\n");
		_exit(0);
	}
	if(argv[1][0]=='-')
		for(i=2,c=1,b=0;argv[1][c];c++)
		{
			b=b*10;
			b+=argv[1][c]-48;
		}
	for(q=b;i<argc;i++)
	{
		a=1;
		s = open(argv[i],O_RDWR);
		if(s>0)
		{
			if(argc>2)
			{
				printf("==> %s <==\n",argv[i]);
			}
/*			while(1)
			{
				c = read(s,sk,1);
				if(sk[0]=='\n')
					a++;
				if(c==0)
					break;
			}
			q=a-b;
			lseek(s,0,SEEK_SET);
			a=1;*/
			lseek(s,0,SEEK_END);
			while(1)
			{
				c=lseek(s,-2,SEEK_CUR);
				read(s,sk,1);
				if(sk[0]=='\n')
					a++;
				if(a>b || c==0)
					break;
			}
			while(1)
			{
				c = read(s,sk,4000);
				if(c==0)
					break;
//				if(a>=q)
					write(1,sk,c);
//				if(sk[0]=='\n')
//					a++;
			}
		}
		if(s<0)
		{
			printf("==> %s <==\n",argv[i]);
			printf("tail: error reading '%s':\n",argv[i]);
			perror("");
			continue;
		}
		close(s);
	}
}
