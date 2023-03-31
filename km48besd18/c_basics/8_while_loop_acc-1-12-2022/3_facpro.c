//3) Write a program to read a number n and print the factorial of n.

#include<stdio.h>
int main()
{
	int i=1,n,b=1;
	printf("enter a value\n");
	scanf("%d",&n);
	while(i<=n)
	{
		b*=i++;
	}
	printf("the factorial is %d\n",b);
	return 0;
}
