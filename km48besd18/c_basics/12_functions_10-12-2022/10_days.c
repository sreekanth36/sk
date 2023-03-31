//10)Write a function that accepts a month and year as input, and returns the number of days of the month as output. Print the number of days in a given month and year.


#include<stdio.h>
int month(int m,int y);
int year(int y);
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
int month(int m,int y)
{
	int d;
	switch(m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:d=31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:d=30;
			break;
		case 2: if ((y%100!=0 && y%4==0)||(y%400==0))
			{
				d=29;
			}
			else 
				d=28;
			break;
	}
	return d;
}
int year(int y)
{
	int d;
	if((y%100!=0 && y%4==0)||(y%400==0))
		d=366;
	else
		d=365;
	return d;
}
