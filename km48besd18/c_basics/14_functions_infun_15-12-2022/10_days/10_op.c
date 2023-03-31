#include"sk.h"
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
