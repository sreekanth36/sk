
// 1. Write a Macro's Set,clear and toggle n'th bit using bit wise operator?

#include"/home/sreekanth/pratice/sk.h"

int main()
{
	int x,p;
	printf("enter two values\n");
	scanf("%d%d",&x,&p);
	printf("set=%d\n",(x | 0x1<<p));
	printf("clear=%d\n",(x & ~(0x1<<p)));
	printf("toggle=%d\n",(x ^ 0x1<<p));
	if(x & (0x1 << p))
		printf("ON\n");
	else
		printf("OFF\n");
}
