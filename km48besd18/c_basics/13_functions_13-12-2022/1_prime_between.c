/*1)Write a program with a function that takes two integer arguments, and prints all prime numbers between those numbers using the prime number function written previously. return type should be void.
 *
PrintAllPrimes - return type is void. Should use IsPrime()*/

#include<stdio.h>
int isprime(int a);
void prime (int a,int b);
//int isprime(int a);
int main()
{
	int a,b;
	printf("enter 2 value\n");
	scanf("%d%d",&a,&b);
	prime(a,b);
	return 0;
}
void prime (int a,int b)
{
	for (;a<=b;a++)
	{
	      if(isprime(a))
		printf("%d\n",a);
	}
	return ;
}
int isprime(int a)
{
	int i;
	for(i=2;i<=(a/2);i++)
		if (a%i==0)
			return 0;
	return 1;
}

