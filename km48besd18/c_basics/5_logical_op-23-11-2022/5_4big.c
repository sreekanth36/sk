//5) Write a program to read 4 numbers and print the biggest number.

#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter 4 values\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if ((a>b)&&(a>c)&&(a>d))
		printf("a is big:%d\n",a);
	else if ((b>c)&&(b>d))
		printf("b is big:%d\n",b);
	else if (c>d)
		printf("c is big:%d\n",c);
	else 
		printf("d is big:%d\n",d);
	return 0;
}





