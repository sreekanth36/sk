/*14) write a function to take an array as input, and count how many times the biggest number is repeated in that array, and return the count. 
eg., array : {10, 14,16,10, 10 , 16, 14, 14, 16, 16};

output : biggest number is repeated 4 times*/


#include<stdio.h>
int big(int sk[],int);
int main()
{
	int i,a;
//	int sk[]={10,14,16,10,16,14,14,16,16};
	printf("enter max size\n");
	scanf("%d",&a);
	int sk[a];
	for(i=0;i<a;i++)
	{
		printf("enter a value\n");
		scanf("%d",&sk[i]);
	}
	printf("Biggest number is repeated %d times\n",big(sk,a));
	return 0;
}
int big(int sk[],int m)
{
	int i,a=0,s;
	for(i=0;i<m;i++)
	{
		if(i==0)
			s=sk[i];
		else
		{
			if (sk[i]>s)
			{
				s=sk[i];
				a=0;
			}
		}
		if(s==sk[i])
		{
			a++;
		}
	}
	return a;
}
