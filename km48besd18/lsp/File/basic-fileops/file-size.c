
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>


int main()
{
	struct stat temp;
	int ret;

	ret = 	stat("abc",&temp);
	if(ret < 0){
		perror("stat FAIL");
	}

	printf("size of abc file:%ld\n",temp.st_size);

	return 0;
}
