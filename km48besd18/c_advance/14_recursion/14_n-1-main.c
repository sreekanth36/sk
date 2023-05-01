// 13) write a program to print first n numbers (n to 1) using a recursive main function.

#include <stdio.h>

int main(int b)
{
	static int c=1;
	if(c)
	{
	printf("enter a num\n");
	scanf("%d",&b);
	c=0;
	printf("==> output <==\n");
	}
	if(b<=0)
		return 0;
	printf("%d\n",b);
	main(b-1);
}

