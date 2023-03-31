//4) Write a program to read 3 numbers and print the biggest number.

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 values\n");
	scanf("%d%d%d",&a,&b,&c);
	if ((a>b)&&(a>c))
		printf("a is big:%d\n",a);
	else if (b>c)
		printf("b is big:%d\n",b);
	else 
		printf("c is big:%d\n",c);
	return 0;
}
