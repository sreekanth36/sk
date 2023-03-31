/*4.using while ,do while and for loops :
        *
      * *
    * * *
  * * * *
* * * * *   */

#include<stdio.h>
int main()
{
	int i=1,n,j;
	printf("enter max count\n");
	scanf("%d",&n);
	printf("while loop\n");
	while(i<=n)
	{
		j=n-i;
		while(j>0)
		{
			printf("  ");
			j--;
		}
		j=i;
		while(j>0)
		{
			printf("* ");
			j--;
		}
		printf("\n");
		i++;
	}
	i=1;
	printf("do while loop\n");
	do
	{
		if(j=n-i)
		do
		{
			printf("  ");
			j--;
		}
		while (j>0);
		j=i;
		do
		{
			printf("* ");
			j--;
		}
		while(j>0);
		printf("\n");
		i++;
	}
	while (i<=n);
	printf("for loop\n");
	for (i=1;i<=n;i++)
	{
		for (j=n-i;j>0;j--)
			printf("  ");
		for (j=i;j>0;j--)
			printf("* ");
		printf("\n");
	}
	return 0;
}
