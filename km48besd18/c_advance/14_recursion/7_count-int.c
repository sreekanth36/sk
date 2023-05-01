// 6) Write a program to count the number of digits in a number.

#include <stdio.h>

int sk(int a)
{
	if(a==0)
		return 0;
	return sk(a/10)+1;
}

int main()
{
	int a;
	printf("enter a num\n");
	scanf("%d",&a);
	if(a)
		printf("count=%d\n",sk(a));
	else
		printf("count=%d\n",1);
	return 0;
}

