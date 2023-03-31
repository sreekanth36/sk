//13) write a function to take 2 arrays as input and return 1 if they are equal and 0 if they are not equal ( sizes to be sent as seperate arguments).


#include<stdio.h>
int comp(int sk[],int,int sk2[],int);
int main()
{
	int i,m,n,s;
	printf("enter 2 size values\n");
	scanf("%d%d",&m,&n);
	int sk[m],sk2[n];
	printf("enter array 1 values\n");
	for(i=0;i<m;i++)
	{
		printf("enter a value\n");
		scanf("%d",&sk[i]);
	}
	printf("enter array 2 values\n");
	for(i=0;i<n;i++)
	{
		printf("enter a value\n");
		scanf("%d",&sk2[i]);
	}
	s=comp(sk,m,sk2,n);
	if (s==0)
		printf("arrays are not equal\n");
	else
		printf("arrays are equal\n");
	return 0;
}
int comp(int sk[],int m,int sk2[],int n)
{
	int i;
	if (m!=n)
		return 0;
	else
	{
		for(i=0;i<n;i++)
		{
			if(sk[i]!=sk2[i])
				return 0;
		}
	}
	return 1;
}
