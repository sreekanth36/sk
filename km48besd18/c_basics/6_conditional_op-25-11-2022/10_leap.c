//10)check if an year is leap year or not.

#include<stdio.h>
int main()
{
	int a;
	printf("enter a year\n");
	scanf("%d",&a);
	(a%100!=0)&&(a%4==0)||(a%400==0)?printf("%d is a leap year\n",a):printf("%d is not a leap year\n",a);
	return 0;
}
