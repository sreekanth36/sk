// 3) Write a program  for matrix addition and subtraction.


#include<stdio.h>
#if !(defined r && defined c)
#error macro are not defined pls define the macro while compiling gcc
#endif
int main()
{
	int arr1[r][c];
	int arr2[r][c];
	int arr3[r][c];
	int arr4[r][c];
	int i,j;

	printf("enter a 1st matrix\n");
	for(i=0;i<r;i++)
	{

		for(j=0;j<c;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("enter a 2nd matrix\n");
	for(i=0;i<r;i++)
	{	
		for(j=0;j<c;j++)
		{
	
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			arr3[i][j]=arr1[i][j]+arr2[i][j];
			arr4[i][j]=arr1[i][j]-arr2[i][j];
		}
	}
	printf("after addition of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}

	printf("after subtraction of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr4[i][j]);
		}
		printf("\n");
	}

	return 0;
}




