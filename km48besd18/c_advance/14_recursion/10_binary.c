// 9) WAP to print Binary equivalent of an integer using recursion without using any array variable.

#include <stdio.h>

void sk(int a)
{
	if(!a)
		return ;
	sk(a/2);
	printf("%d",a%2);
}

int main()
{
	int a;
	printf("enter a num\n");
	scanf("%d",&a);
	printf("binary=");
	sk(a);
	printf("\n");
	return 0;
}

