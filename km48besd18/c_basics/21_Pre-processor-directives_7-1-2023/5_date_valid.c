/*5)WAP to print if a year is leap year or not. Modify the date validation program using this.*/
#include<stdio.h>
#define isvalid(m,d) ((m>=1)&&(m<=12))&&((d>=1)&&(d<=31))
#define isleap(y) (((y%100!=0)&&(y%4==0))||(y%400==0))
int main()
{
	int d,m,y,d1;
	printf("enter day month year\n");
	scanf("%d%d%d",&d,&m,&y);
	if(isvalid(m,d))
	{
		if(isleap(y))
		{
			d1=29;
			printf("%d is a leap year\n",y);}
		else
		{
			d1=28;
			printf("%d is not a leap year\n",y);}
		if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))
			d1=31;
		if((m==4)||(m==6)||(m==9)||(m==11))
			d1=30;
		if(d<=d1)
			printf("valid Date\n");
		else
			printf("Invalid Date\n");
	}
	else
		printf("Invalid Date\n");
	return 0;
}


