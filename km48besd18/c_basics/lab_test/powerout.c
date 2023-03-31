#include<stdio.h>
int main()
{
	int a,b,s=0,i=0,j;
	printf("enter 2 values\n");
	scanf("%d%d",&a,&b);
	for(i=a;b>1;b--)
	{
		for(j=0,s=0;j<a;j++)
			s+=i;
		i=s;
	}
	printf("%d\n",i);
}
