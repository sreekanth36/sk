// 13. WAP Check if the 20th bit of a 32 bit integer is on or off?

#include<stdio.h>

int main()
{
	long int x;
	printf("enter a value\n");
	scanf("%ld",&x);
	if(x & 0x1<<20)
		printf("ON\n");
	else
		printf("OFF\n");
}
