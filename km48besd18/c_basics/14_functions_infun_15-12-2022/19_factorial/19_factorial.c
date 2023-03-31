/*19)Write a function to take a number and return the output of below series as output. Use factorial function (write your own) to calculate the factorial of the number in each term.
1 - 1/2! + 1/3! - 1/4! + 1/5! .... 1/n!*/


#include"sk.h"
int main()
{
	int n;
	printf("enter max count\n");
	scanf("%d",&n);
	fac(n);
	printf("factorial of num is:%f\n",(fac(n)));
	return 0;
}


