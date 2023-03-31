
#include"../inc/sk.h"
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
