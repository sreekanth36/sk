#include<string.h>
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
//	printf("b=%s 1=%s",b,argv[1]);
//	b=argv[1][1]-48;
		for(i=2,c=1,b=0;argv[1][c];c++)
		{
			b=b*10;
			b+=argv[1][c]-48;
//		printf("b=%d 1=%c\n",b,argv[1][c]);
		}
	for(q=b;i<argc;i++)
	{
		a=1;
		s = open(argv[i],O_RDWR);
		if(s>0)
		{
//			printf("s-%d a=%d b-%d\n",s,a,b);
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
//			printf("a=%d b=%d\n",a,b);
			q=a-b;
//			b=a;
//			a=b-q;
			lseek(s,0,SEEK_SET);
//			printf("a=%d b=%d\n",a,b);
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
//			printf("q=%d\n",q);
			while(1)
			{
				c = read(s,sk,1);
//				printf("sk.1-%s\n",sk);
				if(c==0)
					break;
//				printf("a=%d b-%d c=%d q-%d\n",a,b,c,q);
//				if(a>=q)
				{
//					printf("sk.1-%s\n",sk);
					write(1,sk,c);
//					printf("a=%d b-%d c=%d q-%d\n",a,b,c,q);
				}
				if(sk[0]=='\n')
					a++;
//				write(1,sk,c);
			}
//			printf("\n");		
		}
		if(s<0)
		{
			printf("==> %s <==\n",argv[i]);
//			printf("tail: error reading '%s':\n",argv[i]);
			perror("tail: error reading");
			continue;
		}
		close(s);
	}
}
