// 11. WAP whether a number is power of 2 or not?

#include<stdio.h>

int main()
{
	int x,a=0;
	printf("enter a value\n");
	scanf("%d",&x);
	while(x)
	{
		if(x & 0x1)
			a++;
		x=x>>1;
	}
	if(a==1)
		printf("given number is power of 2\n");
	else
		printf("given number is not a power of 2\n");
}
