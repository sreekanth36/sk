/*7.
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5 */

#include<stdio.h>
int main()
{
	int i=1,n,j;
	printf("enter max count\n");
	scanf("%d",&n);
	while (i<=n)
	{
		j=1;
		while(j<=i)
		{
			printf("%d ",j);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}

