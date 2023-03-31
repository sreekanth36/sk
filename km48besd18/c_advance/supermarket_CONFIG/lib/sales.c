#include"../inc/sk.h"
static int s=0,n=0;
void sell()
{
	int item,stock,i;
	printf("enter no.of item\n");
	scanf("%d",&item);
	stock=check();
	if (item<=stock)
	{
		deletestock(item);
		s++;
		n+=item;
	}
	else
	{
		printf("1:sell available stock:%d\n2:cancel the purchase\n",stock);
		scanf("%d",&i);
		if (i==1)
		{
			deletestock(stock);
			s++;
			n+=stock;
		}
	}

}
int saledone()
{
	return s;
}
int itemsold()
{
	return n;
}

