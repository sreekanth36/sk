//4) Write a function that can take two integers as input, and gives 5 outputs : addition, subtraction, multiplication, quotient and reminder of those two numbers. Print the outputs in the main function.


#include<stdio.h>
void cal(int x,int y,int *a,int *b,int *c,int *d,int *e);
int main()
{
	int x,y,a,b,c,d,e;
	printf("enter 2 values\n");
	scanf("%d%d",&x,&y);
	cal(x,y,&a,&b,&c,&d,&e);
	printf("add:%d sub:%d mul:%d div:%d rem:%d\n",a,b,c,d,e);
	return 0;
}
void cal(int x,int y,int *a,int *b,int *c,int *d,int *e)
{
	*a=x+y;
	*b=x-y;
	*c=x*y;
	*d=x/y;
	*e=x%y;
}
