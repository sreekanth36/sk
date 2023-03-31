//1) Create a dynamic array of integers. Take input from user , sort the array and display the output.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	void *p;
	int n;
	printf("enter number array elements\n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	int i=0;
	for( i=0;i<n;i++)
	{
		scanf("%d",((int *)p+i));
	}
	int j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(*((int *)p+j)>*((int *)p+j+1))
			{
				int a=*((int *)p+j);
				*((int *)p+j)=*((int *)p+j+1);
				*((int *)p+j+1)=a;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*((int *)p+i));
	}
}
