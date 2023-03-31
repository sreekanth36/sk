//3.Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . Find out the biggest and smallest numbers and their indexes and print. 


#include<stdio.h>
int main()
{
	int sk[10];
	int i,x,a,y,b;
	printf("enter 10 values\n");
//	for (i=0;i<10;i++)
//		scanf("%d",sk[i]);
	for (i=0;i<10;i++)
	{
		scanf("%d",&sk[i]);
		if (i==0)
		{
			x=sk[i];
			a=i;
			y=sk[i];
			b=i;
		}
		else
		{
			if(sk[i]<x)
			{
				x=sk[i];
				a=i;
			}
			if (sk[i]>y)
			{
				y=sk[i];
				b=i;
			}
		}
	}
	printf("smaller number:%d and index:%d\nbiggest number:%d and index:%d\n",x,a,y,b);
	return 0;
}
