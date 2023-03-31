#include"sk.h"
void mywait(void);
int main()
{
	mywait();
}
void mywait(void)
{
	int a;
	char s;
	a=open("abc.c",O_RDONLY);
	while(1)
	{
	sleep(1);
	read(a,&s,1);
	write(1,&s,1);
	lseek(a,-1,SEEK_CUR);
	if(s=='1')
		break;
	}
	close(a);
	printf("\n");
}
