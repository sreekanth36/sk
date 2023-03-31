/*9) Read two numbers from the user, and print all serial numbers between those numbers.
  eg., inputs: 10   20
output: 10 11 12 13 14 15 16 17 18 19 20*/

#include<stdio.h>
int main()
{
	int i=0,m,n;
	printf("enter 2 values\n");
	scanf("%d%d",&m,&n);
	printf("output:\n");
	while(i<=n)
	{
		if (i==0)
			i=m;
		else
			printf("%d ",i++);
	}
	printf("\n");
	return 0;
}
