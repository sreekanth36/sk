//12.write a function to modify the array such that all negative numbers are converted to positive.


#include<stdio.h>
void neg(int sk[],int);
int main()
{
	int i,a,n;
	printf("max no.of values\n");
	scanf("%d",&n);
	int sk[n];
	for (i=0;i<n;i++)
	{
		printf("enter a value\n");
		scanf("%d",&a);
		sk[i]=a;
	}
	neg(sk,n);
	return 0;
}
void neg(int sk[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(sk[i]<0)
			sk[i]=-sk[i];
		printf("%d ",sk[i]);
	}
	printf("\n");
}
