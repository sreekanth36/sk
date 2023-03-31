//4)Write a program to find the biggest of three numbers using conditional operator.

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b,c values\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("%d is big\n",(a>b)?(a>c)?a:c:(b>c)?b:c);
}

