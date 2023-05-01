// 8) Write a recursive function that returns the reverse of an integer.

#include <stdio.h>

int sk(int a)
{
	static int b=1;
	if(!(a/10))
		return a%10;
	return sk(a/10)+((a%10)*(b=b*10));
}

int main()
{
	int a=0;
	printf("enter a num\n");
	scanf("%d",&a);
	printf("rev=%d\n",sk(a));
	return 0;
}
