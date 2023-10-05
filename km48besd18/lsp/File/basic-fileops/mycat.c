
/* my own cat version program */

#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int errno;

int main(int argc, char*argv[])
{
	int fd,ret;
	char buff[200];
	char temp;

	printf("no of arguments:%d\n",argc);
	printf("1st argument:%s\n",argv[1]);
	printf("2nd argument:%s\n",argv[2]);

	fd = open(argv[1],O_RDONLY);
	printf("fd:%d\n",fd);
	if(fd < 0){
		perror("open FAIL:");
		printf("errno:%d\n",errno);
		_exit(0);
	}

	while(1)
	{
		ret = read(fd,&temp,1);
		if(ret == 0) // EOF
		break;
		write(1,&temp,ret);	
	}
	close(fd);
	return 0;
}
