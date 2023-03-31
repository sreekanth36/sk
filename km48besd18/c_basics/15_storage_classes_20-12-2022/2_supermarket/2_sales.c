#include"sk.h"
extern int stock;
void sell()
{
	int item;
	printf("enter no.of item\n");
	scanf("%d",&item);
	if (item<=stock)
		deletestock(item);
	else
		printf("sales not possible\n");
}
