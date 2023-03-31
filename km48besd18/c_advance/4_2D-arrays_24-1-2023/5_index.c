// 5) Search for an element in a two dimentional array, and print its position - as row and column numbers. write a search function that will receive the array and return row and column indexes as output.


#include<stdio.h>
int ndex(int arr[r][c],int k,int arr1[]);
#if !(defined r && defined c)
#error macro are not defined pls define the macro while compiling gcc
#else
int main()
{
	int arr1[r][c];
	int arr2[2];
	int i,j,k,b;

	printf("enter a 1st matrix\n");
	for(i=0;i<r;i++)
	{

		for(j=0;j<c;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("enter a element to search\n");
	scanf("%d",&k);
        b=ndex(arr1,k,arr2);
	if(b==-1)
		printf("match not found\n");
	else
		printf("index value of %d and %d\n",arr2[0],arr2[1]);
	return 0;
}		

int ndex(int arr[r][c],int k,int arr1[])
{
	int i,j;
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(arr[i][j]==k)
			{
				
				arr1[0]=i;
				arr1[1]=j;
				return 1;
			}
		}
	}
	return -1;
}
#endif








































































