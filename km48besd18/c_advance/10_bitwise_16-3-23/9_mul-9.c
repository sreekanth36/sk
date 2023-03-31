// 9. WAP multiply a number by 9 using bit shift.

#include<stdio.h>

int main()
{
	int x;
	printf("enter a value\n");
	scanf("%d",&x);
	printf("mul=%d\n",(x<<3)+x);
}
