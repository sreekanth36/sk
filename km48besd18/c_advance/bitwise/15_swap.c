// 15. WAP Swap any two numbers using bitwise operators. How it works?

#include<stdio.h>

int main()
{
	int x,y,a;
	printf("enter two values\n");
	scanf("%d%d",&x,&y);
	a=y;
	y = (x ^ y) ^ y;
	x = (a ^ x) ^ x;
	printf("x=%d y=%d\n",x,y);
}
