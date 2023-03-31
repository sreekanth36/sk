#include"../inc/sk.h"
int stock=100;
void checkstock()
{
	printf ("The stock available is:%d\n",stock);
}

void addstock(int item)
{
	stock+=item;
}
void deletestock(int item)
{
	stock-=item;
}
int check()
{
	return stock;
}
