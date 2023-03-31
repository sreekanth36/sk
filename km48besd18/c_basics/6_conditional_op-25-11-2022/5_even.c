//5)Write a program that determines whether a given integer is odd or even and displays the appropriate message.

#include<stdio.h>
int main()
{
	int a;
	printf("enter a value\n");
	scanf("%d",&a);
	(a%2==0)?printf("even\n"):printf("odd\n");
}
