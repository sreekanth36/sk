//1-Write a program to print if a given number is prime or not based on number of factors counting.
#include<stdio.h>
int main()
{
	int x=1,s=1,n;
	printf("enter a number\n");
	scanf("%d",&n);
	while(x<=n)
	{
		if (n%x++==0)
			s++;
	}
	if (s<=3)
		printf("%d is prime number\n",n);
	else
		printf("%d is not prime number\n",n);
	return 0;
}
