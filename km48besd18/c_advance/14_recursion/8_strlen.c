// 7) Implement string length function using recursion.

#include <stdio.h>

int sk(char *a)
{
	if(!(*a))
		return 0;
	return 1+sk(a+1);
}

int main()
{
	char a[20]={0};
	printf("enter a string\n");
	scanf("%19[^\n]s",a);
	printf("length=%d\n",sk(a));
	return 0;
}
