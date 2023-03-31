#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter size value\n");
	scanf("%d",&n);
	int sk[n],sk2[n];
	printf("enter values\n");
	for(i=0;i<n;i++)
		scanf("%d",&sk[i]);
	for(i=0;i<n;i++)
	{
		sk2[i]=1;
		for(j=0;j<n;j++)
		{
			if(i!=j)
				sk2[i]*=sk[j];
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",sk2[i]);
	return 0;
}
