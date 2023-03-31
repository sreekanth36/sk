//1) Write a program to find LCM of 2 given  numbers.


#include<stdio.h>
int main()
{
	int a,b,x,y;
	printf("enter 2 values\n");
	scanf("%d%d",&x,&y);
	a=x;
	b=y;
	while (a!=b)
	{
		if (a<b)
			a=a+x;
		else
			b=b+y;
	}
	printf("LCM is %d\n",a);
}
