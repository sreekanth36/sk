// 12) an array contains some numbers. You need to find out how many times the biggest number has occurred in that array by incrementing the array without using index. You can find the biggest number, and also count it 
#include<stdio.h>
int bigrepeat(int *s,int);
int main()
{
	int n;
	printf("enter n value\n");
	scanf("%d",&n);
	int s[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter a values\n");
		scanf("%d",&*(s+i));

	}
	printf("biggest number is repeated %d times\n",bigrepeat(s,n));
	return 0;
}

int bigrepeat(int *s,int n)
{
	int i,c=0,h=0;
	for(i=0;i<n;i++,s++)
	{
		if(i==0)
			c=*(s);
		else 
		{
			if(*(s)>c)
			
			{
			c=*(s);
			h=0;
			}
		}
		if (c==*(s))
			h++;
	}
	return h;
}
















































