//4)Write a function to return the product of two numbers without using * operator.


#include<stdio.h>
int add(int a,int b);
int main()
{
	int a,b;
	printf("enter 2 values\n");
	scanf("%d%d",&a,&b);
	add(a,b);
	printf("mul of number is:%d\n",(add(a,b)));
	return 0;
}
int add(int a,int b)
{
	int i=0,s=0;
	for(i=0;i<b;i++)
		s+=a;
	return s;
}
