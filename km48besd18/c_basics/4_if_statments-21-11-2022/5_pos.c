//5) Write a program to read a number and print the number as it is if it is positive or zero, convert it to positive and print, if the given number is negative.

#include<stdio.h>
int main()
{
	int a;
	printf("enter a value");
	scanf("%d",&a);
	if (a<0)
	{
		if (a==0)
			printf("a is zero %d\n",a);
	else
	     printf("a is positive %d\n",a*(-1));
	}
	else 
	printf("a is positive %d\n",a);

			return 0;
}

