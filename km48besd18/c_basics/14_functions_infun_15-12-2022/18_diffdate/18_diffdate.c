//18)Write a function to accept two dates as input arguments and return the difference in number of days.

#include"sk.h"
int main()
{
	int d,m,y,d1,m1,y1,d2,m2,y2,i;
	printf("enter date,month and year\n");
	scanf("%d%d%d%d%d%d",&d1,&m1,&y1,&d2,&m2,&y2);
	i=valid(d1,m1,y1,d2,m2,y2);
	if(i==0)
		printf("enter a valid date\n");	
	return 0;
}
