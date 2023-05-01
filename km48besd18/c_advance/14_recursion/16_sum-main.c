// 15) write a program to print the sum of n numbers using a recursive main function.

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
	printf("%d\n",main(b));
	}
	if(b<=0)
		return b;
	return b+main(b-1);
}

