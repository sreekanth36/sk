// 10. WAP whether a number is ODD or EVEN using bitwise.

#include<stdio.h>

int main()
{
	int x;
	printf("enter a value\n");
	scanf("%d",&x);
	if(x & 0x1)
		printf("odd number\n");
	else
		printf("even number\n");
}
