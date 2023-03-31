//9)Write a function to accept two dates as input arguments, and return 1 if the first date is older, 0 if the second date is older.

#include"sk.h"
int main()
{
	int d1,m1,y1,d2,m2,y2,i;
	printf("enter date,month and year\n");
	scanf("%d%d%d%d%d%d",&d1,&m1,&y1,&d2,&m2,&y2);
	i=date(d1,m1,y1,d2,m2,y2);
	if (i==1)
		printf("%d-%d-%d is older\n",d1,m1,y1);
	else if (i==0)
		printf("%d-%d-%d is older\n",d2,m2,y2);
	else
		printf("date is invalid\n");
	return 0;
}


