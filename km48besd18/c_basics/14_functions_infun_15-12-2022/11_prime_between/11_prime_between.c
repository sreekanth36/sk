/*11)Write a program with a function that takes two integer arguments, and prints all prime numbers between those numbers using the prime number function written previously. return type should be void.
 *
PrintAllPrimes - return type is void. Should use IsPrime()*/

#include"sk.h"
int main()
{
	int a,b;
	printf("enter 2 value\n");
	scanf("%d%d",&a,&b);
	prime(a,b);
	return 0;
}


