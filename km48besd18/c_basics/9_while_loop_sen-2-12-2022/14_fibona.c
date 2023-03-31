//14) Print Fibonacci series upto n terms.Fibonacci series : 1 1 2 3 5 8 13....etc

#include<stdio.h>
int main()
{
	int x,a=1,b=0,c=0,i=1;
	scanf("%d",&x);
	while(i<x)
	{
		//a=b;
		//b=c;
		b=a;
		a=c;
		c=a+b;
		i++;
			printf(" %d+%d=%d\n",a,b,c);
	}
}
