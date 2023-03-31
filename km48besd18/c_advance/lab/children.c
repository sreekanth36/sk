#include"sk.h"
void myexit(void);
int main()
{
	myexit();
}
void myexit(void)
{
	int a,b;
	char s;
	a=open("abc.c",O_RDWR);
	while(1)
	{
	a=open("abc.c",O_RDWR);
	read(0,&s,1);
	getchar();
	lseek(a,-1,SEEK_CUR);
	write(a,&s,1);
	if(s=='1')
		break;
	}
}
