
/* Hello World System Program */

#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int errno;

int main()
{
	int ret;

	ret = write(3,"Hello World\n",12);
	if(ret < 0){
		perror("Write FAIL:");
		printf("errno:%d\n",errno);
	}
	return 0;
}
