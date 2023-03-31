//8)Write a function to accept a year as input and return 1 if the year is a leap year, otherwise returns  0.

#include"sk.h"
int main()
{
	int y,i;
	printf("enter a value\n");
	scanf("%d",&y);
	i=leap(y);
	if (i==1)
		printf("%d is leap year\n",y);
	else
		printf("%d is not a leap year\n",y);
	return 0;
}


