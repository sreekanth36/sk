#include"sk.h"
static int p=0,pi=0;
void purchase()
{
	int limit=1000,item,stock,i;
	printf("enter no.of item\n");
	scanf("%d",&item);
	stock=check();
	if((stock+item)<=limit)
	{
		addstock(item);
		p++;
		pi+=item;
	}
	else
	{
		printf("1:purchase & fill available space:%d\n2:cancel the purchase\n",(limit-stock));
		scanf("%d",&i);
			if (i==1)
			{
				addstock(limit-stock);
				p++;
				pi+=(limit-stock);
			}
	}
}
int purchasedone()
{
	return p;
}
int itempurchase()
{
	return pi;
}
