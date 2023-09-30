#include<stdio.h>

int main()
{
	int a,b=0,c=0,d=0;
	printf("enter a value\n");
	scanf("%d",&a);
	c=a;
	for(int x=0;x<2*a-1;x++)
	{
		for(int b=a,y=0,z=2*a-1;y<2*a-1;y++)
		{
			printf("%d ",b);
			if(y<x && y>2*a-1)
				b--;
			c--;
		}
		printf("\n");
	}
	return 0;
}
