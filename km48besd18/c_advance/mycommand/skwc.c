 
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc,char * argv[])
{
	int s,i=1,a=1,c,q=0,z=0,e=0,f=0,g=0;
	char sk[4000]={0},ss=0;
	int b=10;
	if(argc < 2)
	{
		printf("Command Usage: wc <filename>\n");
		_exit(0);
	}
	for(i=1;i<argc;i++)
	{
		a=0;
		q=0;
		z=0;
		ss=0;
		ssk=0;
		s = open(argv[i],O_RDWR);
		if(s>0)
		{
			while(1)
			{
				c = read(s,sk,1);
				if(c==0)
					break;
				if(sk[0]=='\n')
					a++;
				printf("s1=%c\n",sk[0]);
				if((sk[0]==' ' && ss!=' ' && ss!='/')||(sk[0] =='\n' && ss!= '\n' && ss!=' ')|| ((sk[0]=='*' || sk[0]=='/') && ss=='/'))
				{
					q++;
					printf("q=%d ss=%c sk=%c\n",q,ss,sk[0]);
				}
				ss=sk[0];
				z++;
			}
		}
		if(s<0)
		{
			printf("wc: %s:\n",argv[i]);
			perror("");
			printf(" %d  %d  %d %s\n",a,q,z,argv[i]);
			continue;
		}
		close(s);
		printf(" %d\t  %d\t  %d\t %s\n",a,q,z,argv[i]);
		e+=a;f+=q;g+=z;
	}
	if(argc>2)
	printf(" %d\t  %d\t  %d\t total\n",e,f,g);
}
