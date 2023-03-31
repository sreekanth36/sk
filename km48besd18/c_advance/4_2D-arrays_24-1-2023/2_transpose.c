/* 2) Write the following program :
Declare a two dimensional array of elements and find and print its transpose.
eg., if the matrix is :       1 3
                              4 5
                              7 8

its transpose should be :     1 4 7
                              3 5 8 */

#include<stdio.h>
#if !(defined r && defined c)
#error macro are not defined pls define the macro while compiling gcc
#endif
int main()
{
	int arr[r][c];
	int arr2[c][r];
	int i,j;

	printf("enter a elements\n");
	for(i=0;i<r;i++)
	{

		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
			arr2[j][i]=arr[i][j];
		}
	}
	printf("matrix after transpoe\n");
	for(i=0;i<c;i++)
	{

		for(j=0;j<r;j++)
		{
			printf(" %d\t",arr2[i][j]);

		}
		printf("\n");
	}
	return 0;
}








