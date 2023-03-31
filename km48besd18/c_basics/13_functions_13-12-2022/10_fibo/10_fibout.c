#include"sk.h"
void fib(int n)
{
	int s=0,a=1,b=0,i;
	for (i=1;i<=n;i++)
	{
		b=a;
		a=s;
		s=a+b;
		printf("%d ",s);
	}
	printf("\n");
	return ;
}
