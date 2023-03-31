/*9.
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1  */


#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter max count\n");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for (j=n-i+1;j>0;j--)
			printf("%d ",i);
		printf("\n");
	}
	return 0;
}

