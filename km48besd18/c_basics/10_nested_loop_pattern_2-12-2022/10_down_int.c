/*10.
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1  */


#include<stdio.h>
int main()
{
	int a,i,j,n;
	printf("enter max count\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for (j=n,a=1;a<=i;j--,a++)
			printf("%d ",j);
		printf("\n");
	}
	return 0;
}

