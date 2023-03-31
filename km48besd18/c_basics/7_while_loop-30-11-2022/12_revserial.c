/*12) Read two numbers from the user, and print all numbers in reverse order.
  eg., inputs: 10   20
output:
20 19 18 17 16 15 14 13 12 11 10*/

#include<stdio.h>
int main()
{
	int i,n;
	printf("enter 2 values\n");
	scanf("%d%d",&n,&i);
	printf("output:\n");
	while(i>=n)
	{
		printf("%d ",i--);
	}
	printf("\n");
	return 0;
}
