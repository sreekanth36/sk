//13)Write a function to accept a date and validate the date. Return 1 if the date is valid, 0 if it is not valid.

#include"sk.h"
int main()
{
	int d,m,y,i;
	printf("enter a date,month and year\n");
	scanf("%d%d%d",&d,&m,&y);
	i=date(d,m,y);
	if(i==1)
		printf("%d-%d-%d is valid date\n",d,m,y);
	else
		printf("%d-%d-%d is not a valid date\n",d,m,y);
	return 0;
}


