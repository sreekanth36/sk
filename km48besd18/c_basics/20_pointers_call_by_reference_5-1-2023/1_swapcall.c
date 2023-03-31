//1) Write a program to swap two numbers using Call by Value and Call by Reference.


#include<stdio.h>
void swap1(int *a,int *b);
void swap(int a,int b);
int main()
{
	int a,b;
	printf("enter 2 values\n");
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("call by value\na:%d b:%d\n",a,b);
	swap1(&a,&b);
	printf("call by reference\na:%d b:%d\n",a,b);
}
void swap(int a,int b)
{
	int x;
	x=a;
	a=b;
	b=x;
}
void swap1(int *a,int *b)
{
	int x;
	x=*a;
	*a=*b;
	*b=x;
}
