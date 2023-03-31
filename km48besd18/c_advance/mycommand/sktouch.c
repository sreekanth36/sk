#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc,char * argv[])
{
	int i,s;
	char sk[4];
	struct timespec *ss;
	for(i=1;i<argc;i++)
	{
		s = open(argv[i],O_RDWR|O_CREAT,0644);
		futimens(s,ss);
		close(s);
	}
}
