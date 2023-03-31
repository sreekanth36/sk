//4)Write a function that takes an integer parameter and prints its multiplication table.return type should be void.

#include"sk.h"
int main()
{
	int a,i;
	printf("enter a value\n");
	scanf("%d",&a);
	for (i=1;i<=10;i++)
		table(a,i);
	return 0;
}


