/*2.using while ,do while and for loops :
* * * * *
* * * * 
* * * 
* *
*  */

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter max count\n");
	scanf("%d",&n);
	i=n;
	printf("while loop\n");
	while(i>0)
	{
		j=i;
		while (j>0)
		{
			printf("* ");
			j--;
		}
		printf("\n");
		i--;
	}
	printf("do while loop\n");
	i=n;
	do
	{
		j=i;
		do
		{
			printf("* ");
			j--;
		}
		while (j>0);
		printf("\n");
		i--;
	}
	while (i>0);
	printf("for loop\n");
	for (i=n;i>0;i--)
	{
		for (j=i;j>0;j--)
			printf("* ");
		printf("\n");
	}
	return 0;
}

