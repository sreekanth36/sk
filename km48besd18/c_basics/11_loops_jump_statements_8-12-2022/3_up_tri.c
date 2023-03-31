/*3.using while ,do while and for loops :
*
* *
* * *
* * * *
* * * * *
* * * * * *  */


#include<stdio.h>
int main()
{
	int i=1,n,j;
	printf("enter max count\n");
	scanf("%d",&n);
	printf("while loop\n");
	while (i<=n)
	{
		j=i;
		while(j>0)
		{
			printf("* ");
			j--;
			if (j==0)
				break;
		}
		printf("\n");
		i++;
	}
	printf("do while loop\n");
	i=1;
	do
	{
		j=i;
		do
		{
			printf("* ");
			j--;
			if (j==0)
				break;
		}
		while (j>0);
		printf("\n");
		i++;
	}
	while (i<=n);
	printf("for loop\n");
	for (i=1;i<=n;i++)
	{
		for (j=i;j>0;j--)
		{
			printf("* ");
			if (j==0)
				break;
		}
		printf("\n");
	}
	return 0;
}

