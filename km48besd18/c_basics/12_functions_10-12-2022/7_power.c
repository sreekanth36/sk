//7)Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n.


#include<stdio.h>
int power(int a,int b);
int main()
{
	int a,b,c,s=1;
	printf("enter 2 values\n");
	scanf("%d%d",&a,&b);
	c=power(a,b);
	printf("power of %d to %d is %d\n",a,b,c);
	return 0;
}
int power(int a,int b)
{
	int s=1,i;
	for(i=1;i<=b;i++)
		s*=a;
	return s;
}
