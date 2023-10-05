
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
	int fd1,fd2,ret;
	char buff[1024];
	char temp;

	if (argc != 3)
	{	
		printf("Command Usage: ./mycp <sr> <ds>\n");
		_exit(0);
	}

	printf("no of arguments:%d\n",argc);
	printf("1st argument:%s\n",argv[1]);
	printf("2nd argument:%s\n",argv[2]);
	


	fd1 = open(argv[1],O_RDONLY); // open source file
	printf("fd1:%d\n",fd1);
	if(fd1 < 0){
		perror("open FAIL:");
		printf("errno:%d\n",errno);
		_exit(0);
	}
	
	fd2 = open(argv[2],O_WRONLY | O_CREAT,0666); // open dest file
	printf("fd2:%d\n",fd2);
	if(fd2 < 0){
		perror("open FAIL:");
		printf("errno:%d\n",errno);
		_exit(0);
	}

	while(1)
	{
		ret = read(fd1,buff,1024);
		if(ret == 0) // EOF
		break;
		write(fd2,buff,ret);	
	}
	close(fd1);
	close(fd2);
	return 0;
}
