// 2. WAP print binary?

#include<stdio.h>

int main()
{
	int x,p=0,a;
	printf("enter a value\n");
	scanf("%d",&x);
	a=x;
	while(a)
	{
		a=a>>1;
		p++;
	}
	while(p)
	{
		if(x & (0x1)<< --p)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}
