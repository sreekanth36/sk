/*3.using while ,do while and for loops :
* * * * *
  * * * *
    * * *
      * *  
        *   */
#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter max count\n");
	scanf("%d",&n);
	i=n;
	printf("while loop\n");
	while (i>0)
	{
		j=n-i;
		while (j>0)
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
			i--;
	}
	i=n;
	printf("do while loop\n");
	do
	{
		if (j=n-i)
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
		while (j>0);
		printf("\n");
		i--;
	}
	while(i>0);
	printf("for loop\n");
	for (i=n;i>0;i--)
	{
		for (j=n-i;j>0;j--)
			printf("  ");
		for (j=i;j>0;j--)
			printf("* ");
		printf("\n");
	}
	return 0;
}
