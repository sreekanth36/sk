#include"sk.h"
int noofdaysinmonth(int m,int y)
{
	int d;
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		return 31;
	else if(m==4||m==6||m==9||m==11)
		return 30;
	else
	{
		d=isleapyear(y);
		return d;
	}
}
int isleapyear(int y)
{
	if((y%100!=0 && y%4==0)||y%400==0)
		return 29;
	else
		return 28;
}
