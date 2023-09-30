#include <stdio.h>

int main()
{
	int i=0,a,j=0,b=0;
	printf("enter a num\n");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		if(i<(a/2)+1 && a%2==1 || (i<(a/2) && a%2==0))
			b++;
		else if(i>(a/2))
			b--;
		for(j=a-i;j>0;j--)
		{
			printf("%d ",b);
		}
		printf("\n");
	}
}

