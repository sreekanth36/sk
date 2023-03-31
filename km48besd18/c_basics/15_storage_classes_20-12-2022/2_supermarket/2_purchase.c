#include"sk.h"
extern int stock;
void purchase()
{
	int limit=1000,item;
	printf("enter no.of item\n");
	scanf("%d",&item);
	if((stock+item)<=limit)
		addstock(item);
	else
		printf("sorry not able to purchase\n");
}
