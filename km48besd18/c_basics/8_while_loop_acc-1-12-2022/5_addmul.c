//5) Write a program to multiply two numbers without using * operator,

#include<stdio.h>
int main()
{
	int i=1,n,a,b=0;
	printf("enter 2 value\n");
	scanf("%d%d",&n,&a);
	while(i<=a)
	{
		b+=n;
		++i;
	}
	printf("the mul of 2 numbers is %d\n",b);
	return 0;
}
