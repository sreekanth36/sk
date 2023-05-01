// 5) Write a program to find the power of a number( x to the power of n = x * x * x * x....n times.

#include <stdio.h>

int sk(int a,int b)
{
	if(b==0)
		return 1;
	return a*sk(a,b-1);
}

int main()
{
	int x,a;
	printf("enter a num\n");
	scanf("%d",&x);
	printf("enter the power num\n");
	scanf("%d",&a);
	printf("power=%d\n",sk(x,a));
	return 0;
}

