/*3)Write a program to read 2 numbers and print the biggest number.*/

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the a,b values");
	scanf("%d%d",&a,&b);
	if (a>b)
		printf("a is big number:%d\n",a);
	else
		printf("b is big number:%d\n",b);
	return 0;
}

