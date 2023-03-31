/* 1) Declare a two-dimensional array of elements for sales details of a store, for each item, for each sales man. Take the sales values as input and print the array in matrix form.
Find out and print the following :
1 ) Total sales by each sales man
2 ) Total sales for a item
3 ) Total sales */


#include<stdio.h>
#if !(defined r && defined c)
#error macro are not defined pls define the macro while compiling gcc
#endif
int main()
{
	int arr[r][c];
	int i,j,t=0;
	int mrr[r]={0};
	int irr[c]={0};
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter the array values\n");	
			scanf("%d",&arr[i][j]);
			mrr[i]=mrr[i]+arr[i][j];
			irr[j]=irr[j]+arr[i][j];
		}
		t=t+mrr[i];
	}
	for(i=0;i<r;i++)
		printf("total sales by each man %d\n",mrr[i]);
	for(j=0;j<c;j++)
	printf("total no.of items %d\n",irr[j]);
	printf("total sales %d\n",t);
	return 0;
} 










