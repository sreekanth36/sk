#include"sk.h"

int main(int argc,char *argv[])
{
	int i;
	char *s=0,*temp=0;
	if(argc<2)
	{ printf("enter atleast one file name\n");
	}
	for(int b=1;b<argc;b++)
	{
	i=open(argv[b],O_RDONLY);
	if(i<0)
	{
		printf("open failed\n");
	}
	struct stat sk;
	fstat(i,&sk);
	if(sk.st_size==0)
	{
		printf("file size is egg\n");
		continue;
	}
	s=(char *)mmap(NULL,sk.st_size,PROT_READ/* | PROT_WRITE*/,MAP_SHARED,i,0);
//	printf("%p\n",&s);
	if(s==NULL)
	{
		printf("mmap failed\n");
		continue;
	}
//	printf("%lu\n",sk.st_size);
	temp=s;
	printf("%s\n",s);
//	for(int a=0;s[a];a++)
//		printf("%c",(s[a]));
	munmap(temp,sk.st_size);
	close(i);
	}
}
