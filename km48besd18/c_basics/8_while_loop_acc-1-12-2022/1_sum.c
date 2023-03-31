//1) Write  a program to read n numbers from keyboard and find their sum.

#include<stdio.h>
int main()
{
	int i=0,n,a,b;
	printf("enter max value\n");
	scanf("%d",&n);
	while(i<n)
	{
		printf("enter a value\n");
		scanf("%d",&a);
		if (i==0)
			b=a;
		else
			b+=a;
		++i;
	}
	printf("the sum is %d\n",b);
	return 0;
}
