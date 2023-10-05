
/* read() system call example Program */

#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int errno;

int main()
{
	int ret;
	char buff[50];

	ret = read (0,buff,6);
	if(ret < 0){
		perror("read FAIL:");
		printf("errno:%d\n",errno);
	}
	printf("buff:%s",buff);

	return 0;
}
