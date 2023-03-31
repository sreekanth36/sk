// 4) Write a program  for matrix multiplication.


#include<stdio.h>
#if !(defined r && defined c)
#error macro are not defined pls define the macro while compiling gcc
#else
int main()
{
	int arr1[r][c];
	int arr2[r][c];
	int arr3[r][c];
	int i,j,k;

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
			arr3[i][j]=0;
			for(k=0;k<c;k++)
			{
				arr3[i][j]+=arr1[i][k]*arr2[k][j];
			}
			
		}
	}
	printf("after multiple of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}
	return 0;
}

#endif


