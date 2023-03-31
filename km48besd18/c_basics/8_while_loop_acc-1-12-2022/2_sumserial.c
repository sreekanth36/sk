//2) write a program to read a number n, and print sum of all the numbers from 1 to n.

#include<stdio.h>
int main()
{
	int i=1,n,b;
	printf("enter max value\n");
	scanf("%d",&n);
	while(i<=n)
	{
		b+=i++;
	}
	printf("the sum is %d\n",b);
	return 0;
}
