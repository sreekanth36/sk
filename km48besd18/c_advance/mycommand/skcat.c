#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char * argv[])
{
	int s,s1,i;
	char sk[4001];
	if(argc < 2)
		printf("Command Usage: skcat <filename>\n");
	for(i=1;i<argc;i++)
	{
		s = open(argv[i],O_RDONLY);
		if(s < 0)
		{
			printf("cat: %s: \n",argv[i]);
			perror("");
			continue;	
		}
		while(1)
		{
			s1 = read(s,sk,4000);
			if(s1<0)
			{
				printf("cat: %s: \n",argv[i]);
				perror("");
				break;
			}
			if(s1==0)
				break;
			printf("==> %s <==\n",argv[i]);
			write(1,sk,s1);
		}
		close(s);
		printf("\n");
	}

}
