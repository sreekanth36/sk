/* 2.WAP - for the 4 departments of a super market : Sales, Purchase, Stock and SuperMarket in four different source code files.
Stock : Maintains a variable for available stock. and 2 functions, addstock and deletestock to update the stock variable on sales or purchase respectively.
Sales : Has one function: Sell – It will reduce the stock by the number of items sold. Before selling check if enough stock is available.
Purchase : Has one function : Purchase – will increase the stock by the number of items purchased.Set a max value for stock, before purchasing check if the stock room has enough space for new items or not.
SuperMarket : Display menu with choices : 1 ) check AvailableStock 2 ) Purchase new items 3) Sell items … this should be continuous as long as the user wants to continue. Program should stop when the user wants to quit.*/


#include"sk.h"
int main()
{
	int n;
	static int s=0;
	for( ; ; )
	{
		printf("enter your choice\n1:check stock\n2:sell\n3:purchase\n4:quit\n");
		scanf("%d",&n);
		if (n==1)
		{
			checkstock();
		}
		else if(n==2)
		{
			sell();
			s++;
		}
		else if(n==3)
			purchase();
		else 
		{
			printf("1:Latest stock:%d\n",check());
			printf("2:no.of sales done:%d\n",saledone());
			printf("3:no.of item sold:%d\n",itemsold());
			printf("4:no.of purchase done:%d\n",purchasedone());
			printf("5:no.of item purchase:%d\n",itempurchase());
			printf("6:no.of customers visited to store:%d\n",s);
			break;
		}
	}
	return 0;
}
