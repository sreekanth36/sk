/*13.
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *    */

	 
#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter max count\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=n-i;j>0;j--)
			printf("  ");
		for (j=2*i-1;j>0;j--)
			printf(" *");
		printf("\n");
	}
	for (i=1;i<=n;i++)
	{
		for (j=i;j>0;j--)
			printf("  ");
		for (j=n-i,j=2*j-1;j>0;j--)
			printf(" *");
		printf("\n");
	}

	return 0;

}
