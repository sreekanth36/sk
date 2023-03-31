/*6) Write a program to find the power of a number to the given number.
eg.,input : 3 5
output: 3 to the power of 5 -> 243*/

#include<stdio.h>
int main()
{
	int i=1,n,a,b=1;
	printf("enter 2 value\n");
	scanf("%d%d",&n,&a);
	while(i<=a)
	{
		b*=n;
		++i;
	}
	if (n==0 && a==0)
		b=0;
	printf("the power of 2 numbers is %d\n",b);
	return 0;
}
