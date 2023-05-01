// 1) Write a program to find the factorial of a number.

#include <stdio.h>

int sk(int a)
{
	if(a==0)
		return 1;
	return a*sk(a-1);
}

int main()
{
	int a;
	printf("enter a num\n");
	scanf("%d",&a);
	printf("fac=%d\n",sk(a));
	return 0;
}

