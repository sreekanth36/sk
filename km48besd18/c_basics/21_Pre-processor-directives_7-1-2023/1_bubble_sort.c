/*1)Write down a macro to find out the biggest of two numbers.i
MAX(x,y) should define code to find biggest of x and y. Implement array sorting function using this macro (Bubble sort)))*/
#include<stdio.h>
#define s(x,y) (x>y?y:x)
#define min (z>y)
int main()
{
	int sk[10];
	int i,j,a;
	for(i=0;i<10;i++)
	{
		printf("enter a value\n");
		scanf("%d",&sk[i]);
	}
	for(i=0;i<10;i++)
	{
		j=sk[i];
		for(a=i+1;a<10;a++)
		{
			sk[i]=s(sk[i],sk[a]);
			if(sk[i]==sk[a])
			{
				sk[a]=j;
				j=sk[i];
			}

		}
	}
	printf("output:\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",sk[i]);
	}
	printf("\n");
	return 0;
}
