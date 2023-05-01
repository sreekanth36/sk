// 2) Write a program to find the nth Fibonacci number

#include <stdio.h>

int sk(int a)
{
	if(a==1 || a==2 || a<=0)
		return 1;
	return sk(a-2)+sk(a-1);
}

int main()
{
	int a;
	printf("enter a num\n");
	scanf("%d",&a);
	printf("%d\n",sk(a));
}

