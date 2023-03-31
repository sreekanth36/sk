/*6.Write a function to search for a specific element given by the user, in an array and display its index.  Function takes array and element to search as inputs, and returns the index as output. If element not found, return -1. */


#include<stdio.h>
int compare(int sk[],int);
int main()
{
	int n,s;
	int sk[5]={1,2,3,4,5};
	printf("enter a value\n");
	scanf("%d",&n);
	s=compare(sk,n);
	if (s==-1)
		printf("element not found\n");
	else
		printf("index is:%d\n",s);
	return 0;
}
int compare(int sk[],int n)
{
	int i;
	for(i=0;i<5;i++)
	{
		if(n==sk[i])
			return i;
	}
	return -1;
}
