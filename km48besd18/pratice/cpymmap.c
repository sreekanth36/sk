#include"sk.h"

int main(int argc,char *argv[])
{
	int i,a;
	char *s=0,*s1=0,*temp=0,w=1;
	if(argc!=3)
	{ printf("enter atleast one file name\n");
		return 0;
	}
	i=open(argv[1],O_RDWR);
	a=open(argv[2],O_RDWR | O_CREAT,0644);
	if(i<0 || a< 0)
	{
		printf("open failed\n");
	}
	struct stat sk,sk1;
	fstat(i,&sk);
	fstat(a,&sk1);
//	write(a,&w,1);
	printf("%lu\n",sk1.st_size);
	if(sk.st_size==0 || sk1.st_size==0)
	{
		printf("file size is egg\n");
		return 0;
	}
	ftruncate(a,sk.st_size);
	fstat(a,&sk1);
	printf("%lu\n",sk1.st_size);
	s=(char *)mmap(NULL,sk.st_size,PROT_READ | PROT_WRITE,MAP_PRIVATE,i,0);
	s1=(char *)mmap(NULL,sk.st_size,PROT_READ | PROT_WRITE,MAP_SHARED,a,0);
	strcpy(s1,s);
	printf("%p %p\n",&s,&s1);
//	for(int a=0;s[a];a++)
	{
//		s1[a]=s[a];
//		printf("%c",(s1[a]));
	}
	if(s==NULL || s1==NULL)
	{
		printf("mmap failed\n");
		return 0;
	}
	temp=s;
	printf("%s\n",s1);
	munmap(s1,sk.st_size);
	munmap(temp,sk.st_size);
}
