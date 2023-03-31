//13) Find the reverse of an integer.

#include<stdio.h>
int main()
{
	int a,s=0,p;
	printf("enter a value\n");
	scanf("%d",&a);
	while(a!=0)
	{
		p=a%10;
		s=p+s*10;
		a=a/10;
	}
	printf("Reverse of int is %d\n",s);
	return 0;
}
