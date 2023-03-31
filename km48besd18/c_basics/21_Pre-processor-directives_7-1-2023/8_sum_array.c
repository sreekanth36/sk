/*8)Define a  macro, to compute the sum of all elements in an array. It receives array name and the number of elements as arguments.*/
#include<stdio.h>
#define sk(a,n) for(i=0;i<n;s=s+a[i++]);
int main()
{
	int n,i=0,s=0;
	printf("enter array length\n");
	scanf("%d",&n);
	int b[n];
	for(i=0;i<n;i++)
	{
		printf("enter a value\n");
		scanf("%d",&b[i]);
	}
	sk(b,n)
		printf("sum is:%d\n",s);
	return 0;


}
