//14)Write a function to return the product of two numbers without using * operator.

#include"sk.h"
int main()
{
	int a,b;
	printf("enter 2 values\n");
	scanf("%d%d",&a,&b);
	add(a,b);
	printf("mul of number is:%d\n",(add(a,b)));
	return 0;
}


