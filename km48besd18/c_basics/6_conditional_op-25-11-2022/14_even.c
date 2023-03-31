//14) C program to check whether a number is odd or even using switch statement

#include<stdio.h>
int main()
{
	int a;
	printf("enter a value\n");
	scanf("%d",&a);
	switch(a%2==0)
	{
		case 1:printf("even\n");
		       break;
		case 0:printf("odd\n");
	}
}
