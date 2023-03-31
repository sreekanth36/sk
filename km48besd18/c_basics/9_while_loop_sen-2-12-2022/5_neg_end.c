#include<stdio.h>
int main()
{
	int a=0,s=0;
	while(a>=0)
	{
		s+=a;
		printf("enter a number\n");
		scanf("%d",&a);
	}
	printf("Total sum of pos number is %d\n",s);
	return 0;
}
