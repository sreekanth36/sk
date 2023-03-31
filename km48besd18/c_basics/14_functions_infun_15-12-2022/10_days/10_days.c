//10)Write a function that accepts a month and year as input, and returns the number of days of the month as output. Print the number of days in a given month and year.

#include"sk.h"
int main()
{
	int m,y,i,x;
	printf("enter month,year\n");
	scanf("%d%d",&m,&y);
	i=month(m,y);
	x=year(y);
	printf("no of days of month %d and year %d is %d in month %d in year\n",m,y,i,x);
	return 0;
}


