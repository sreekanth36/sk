//6)Write a power function ,that takes 2 numbers as input, and calculates power without using * operator.


#include<stdio.h>
int mul(int,int);
int power(int a,int b);
int main()
{
	int a,b;
	printf("enter 2 values\n");
	scanf("%d%d",&a,&b);
	power(a,b);
	printf("power of number is:%d\n",(power(a,b)));
	return 0;
}
int power(int a,int b)
{
	int i,s=1;
	for(i=1;i<=b;i++)
	{
		s=mul(s,a);
	}
	return s;
}
int mul(int i,int b)
{
	int j,s=0;
	for (j=1;j<=b;j++)
		s+=i;
	return s;
}
