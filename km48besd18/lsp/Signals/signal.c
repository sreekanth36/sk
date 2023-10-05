#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>


main()
{
	int fd,y=20,x=0;
	int *ptr=NULL;
	char *buff;
		
//	printf("*ptr:%d\n",*ptr); // SIGSEGV - segmentation fault


	//fd = open("abc",O_RDWR); 
	//buff = (char *)mmap(0,10,PROT_READ|PROT_WRITE,MAP_PRIVATE,fd,0); // SIGBUS 
	//*buff = 'A';	
	/*while(1);*/
//	getchar(); //SIGINT - ctl+c

//	x = y/x; //SIGFPE - divide by zero


}
