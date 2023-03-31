//9.Write a program to print an integer in binary format using arrays.


#include<stdio.h>
int main()
{
	int i,n;
	printf("enter a value\n");
	scanf("%d",&n);
	int sk[n];
	for(i=0;n>0;i++)
	{
		sk[i]=n%2;
		n=n/2;
	}
	for(--i;i>=0;i--)
		printf("%d ",sk[i]);
	printf("\n");
	return 0;
}
