//16)Write a power function ,that takes 2 numbers as input, and calculates power without using * operator.

#include"sk.h"
int main()
{
	int a,b;
	printf("enter 2 values\n");
	scanf("%d%d",&a,&b);
	power(a,b);
	printf("power of number is:%d\n",(power(a,b)));
	return 0;
}


