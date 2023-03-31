/*10)check if an year is leap year or not. A year is considered leap year in following 2 cases:
  1) year is not divisible with 100, but divisible with 4
  2)year is divisible with 400*/

#include<stdio.h>
int main()
{
	int a;
	printf("enter a year\n");
	scanf("%d",&a);
	if ((a%100!=0)&&(a%4==0)||(a%400==0))
		printf("%d is a leap year\n",a);
	else 
		printf("%d is not a leap year\n",a);
	return 0;
}
