#include<stdio.h>
int fac(int n)
{
	int s=1,i;
	for(i=1;i<=n;i++)
		s*=i;
	return s;
}
int ss(int i,int j)
{
	return fac(i)/(fac(j)*fac(i-j));
}
int main()
{
	int b,a,i,j;
	printf("enter no.of rows\n");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(b=a-i-1;b>0;b--)
			printf("  ");
		for(j=0;j<=i;j++)
		{
			printf("%5d ",ss(i,j));
		}
		printf("\n");
	}
}
