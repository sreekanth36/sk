#include"sk.h"
void printdateinformat(int d,int m,int y)
{
	printsubscript(d);
	printmonthname(m);
	printf("-%d is elder of all\n",y);
}
void printsubscript(int d)
{
	if (d==1)
		printf("The candidate born on %dst",d);
	else if(d==2)
		printf("The candidate born on %dnd",d);
	else if(d==3)
		printf("The candidate born on %drd",d);
	else
		printf("The candidate born on %dth",d);
}
void printmonthname(int m)
{
	switch(m)
	{
		case 1:printf(" Jan");break;
		case 2:printf(" Feb");break;
		case 3:printf(" March");break;
		case 4:printf(" April");break;
		case 5:printf(" May");break;
		case 6:printf(" June");break;
		case 7:printf(" July");break;
		case 8:printf(" Aug");break;
		case 9:printf(" Sep");break;
		case 10:printf(" Oct");break;
		case 11:printf(" Nov");break;
		case 12:printf(" Dec");break;

	}

}



