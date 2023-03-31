//7)Write a program to find the biggest of three numbers using pointers that point to those numbers.


#include<stdio.h>
int main()
{
	int a,b,c;
	int *x=&a,*y=&b,*z=&c;
	printf("enter 3 values\n");
	scanf("%d%d%d",x,y,z);
	if((*x>=*y)&&(*x>=*z))
		printf("a is big:%d",*x);
	else if(*y>=*z)
		printf("b is big:%d",*y);
	else
		printf("c is big:%d",*z);
	return 0;
}
