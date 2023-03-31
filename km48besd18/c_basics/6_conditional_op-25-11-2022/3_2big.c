//3)Write a program to find the biggest of two numbers using conditional operator.

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a,b values\n");
	scanf("%d%d",&a,&b);
	(a>b)?printf("%d is big\n",a):printf("%d is big\n",b);
}
