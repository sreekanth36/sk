//11) count the number of digits in a given integer.

#include<stdio.h>
int main()
{
	long unsigned int a,b=0;
	printf("enter a value\n");
	scanf("%lu",&a);
	while(a!=0)
	{
		a=a/10;
		b++;
	}
	printf("no of digits is%lu\n",b);
	return 0;
}
