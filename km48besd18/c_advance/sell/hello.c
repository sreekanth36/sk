#include<unistd.h>
#include<stdio.h>
#include<errno.h>

int main()
{
	char sk[100];
	int s,s1;
	write(1,"enter upto 9 character\n",23);
	s=read(0,sk,10);
	if(s<0)
	{
		perror("READ FAIL:");
		printf("error num:%d\n",errno);
		_exit(0);
	}
	printf("output:\n");
	s1=write(1,sk,s);
	if(s1<0)
	{
		perror("WRITE FAIL:");
		printf("error num:%d\n",errno);
		_exit(0);
	}
}
