//2)Write a program to add two variables using thier pointers.


#include<stdio.h>
int main()
{
	int x,y;
	int *a=&x,*b=&y;
	printf("Enter 2 values\n");
	scanf("%d%d",&x,b);
	printf("add is:%d\n",*a+*b);
}
