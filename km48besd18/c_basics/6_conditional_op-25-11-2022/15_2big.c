//15) C program to find maximum of two numbers using switch statement

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a,b values\n");
	scanf("%d%d",&a,&b);
	switch(a>b)
	{
		case 1:printf("%d is big\n",a);
		       break;
		case 0:printf("%d is big\n",b);
	}
}
