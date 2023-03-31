//4) Find if a number is prime or not.


#include<stdio.h>
int main()
{
	int a,b,i=2,s=0;
	printf("enter a values\n");
	scanf("%d",&a);
	for (  ;i<=(a/2);i++)
	{
		if (a%i==0)
			s++;
		if (s==1)
			break;
	}
		if (s==0)
			printf("%d is prime number\n",a);
		else
			printf("%d is not a prime number\n",a);
	return 0;
}
