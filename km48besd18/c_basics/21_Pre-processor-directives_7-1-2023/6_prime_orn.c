/*6)  Write a macro to find if a number is prime number or not. Using this macro,print all prime numbers between 2 given numbers.*/

#include<stdio.h>
#define isprime(a,j,i) ((n%j==0)&&(i++)&&(i>=2)) 
int main()
{
	int i=0,j,n,m;
	printf("enter a num\n");
	scanf("%d",&n);
	for(j=2,i=0;j<=n/2;j++)
	{
		if(isprime(n,j,i))
			break;

	}
	if(i<=1)
		printf("%d is prime \n",n);
	else
		printf("%d is not a prime \n",n);
	printf("enter two numbers\n");
	scanf("%d%d",&n,&m);
	for(;n<=m;n++)
	{
		for(j=2,i=0;j<=(n/2);j++)
		{
			if(isprime(n,j,i))
				break;
		}
		if(i==0)
			printf("%d ",n);
	}
	printf("\n");
	return 0;
}
