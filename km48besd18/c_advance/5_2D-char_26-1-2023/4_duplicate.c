// 4) read a set of names using scanf and find out how many names are duplicate.


#include<stdio.h>
#include<string.h>
#define k (strcmp(arr[i],arr[j+1]))
#if !(defined r && defined c)
#error macro are not defined pls define while gcc
#else
void bubble(char arr[r][c]);
int main()
{
	int i,j,a=0,c1=0,b;
	char arr[r][c];
	for(i=0;i<r;i++)
	{
		printf("enter a value\n");
		scanf("%s",arr[i]);
	}
	for(i=0;i<r;i++)
	{
		c1=0;

		for(b=i;b>0;b--)
		{
			if(strcmp(arr[i],arr[b-1])==0)
			{
				c1=1;
			}  	
		}
		if(c1==0)
		{
		for(j=i;j<r-1;j++)
		{
			if (k==0)
			{
				a++;
			}
		}
		}
	}
	printf("duplicate are : %d\n",a);

	
}
#endif


