
/* open() system call example Program */

#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int errno;

int main()
{
	int fd,ret;
	
	fd = open("xyz",O_RDONLY | O_WRONLY | O_CREAT,0664 );
	printf("fd:%d\n",fd);
	if(fd < 0){
		perror("open FAIL:");
		printf("errno:%d\n",errno);
		_exit(0);
	}

	ret = write(fd,"123",3);
	if(ret < 0){
		perror("write FAIL:");
		printf("errno:%d\n",errno);
	}

	close(fd);
	return 0;
}
