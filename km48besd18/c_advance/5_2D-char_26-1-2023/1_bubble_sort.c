// 1) Implement bubble sort function and sort an array of integers in ascending order.

#include<stdio.h>
#define k (arr[i]>arr[j])
#if !(defined n)
#error macro are not defined pls define while gcc
#else
int main()
{
	int i,j,temp;
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("enter a value\n");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if k
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("in ascending order\n");
	for(i=0;i<n;i++)
	{
			printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
#endif


