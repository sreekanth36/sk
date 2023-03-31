/*3)write a function that can take an integer as input and return 1, if the number is prime number and 0 if it is not prime and print appropriate output message.
return type is integer.
IsPrime - returns int (0,1)*/

#include"sk.h"
int main()
{
	int a,i;
	printf("enter a value\n");
	scanf("%d",&a);
	i=prime(a);
	if (i==1)
		printf("%d is prime\n",a);
	else
		printf("%d is not prime\n",a);
	return 0;
}

