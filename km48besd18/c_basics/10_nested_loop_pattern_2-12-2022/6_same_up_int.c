/*6.
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5  */

#include<stdio.h>
int main()
{
	int i=1,n,j;
	printf("enter max count\n");
	scanf("%d",&n);
	while (i<=n)
	{
		j=i;
		while(j>0)
		{
			printf("%d ",i);
			j--;
		}
		printf("\n");
		i++;
	}
	return 0;
}

