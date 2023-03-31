//12) Find the sum of digits in a given integer.

#include<stdio.h>
int main()
{
	int a,b=0,s;
	printf("enter a value\n");
	scanf("%d",&a);
	while(a!=0)
	{
		s=a%10;
		b=b+s;
		a=a/10;
	}
	printf("sum digits is:%d\n",b);
	return 0;
}
