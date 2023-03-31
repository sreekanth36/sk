/*11.
1
2    3
4    5   6
7    8   9    10
11   12  13   14  15  */


#include<stdio.h>
int main()
{
	int a=1,i,j,n;
	printf("enter max count\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for (j=i,a=a;j>0;j--,a++)
			printf("%d ",a);
		printf("\n");
	}
	return 0;
}

