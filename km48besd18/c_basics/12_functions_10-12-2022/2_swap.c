//2)Write a function ,that can take two integers, swap their values and print their new values.return type should be void.


#include<stdio.h>
void swap(int a,int b);
int main()
{
	int a,b;
	printf("enter 2 values\n");
	scanf("%d%d",&a,&b);
	swap(a,b);
	return 0;
}
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("value of a is:%d\nvalue of b is:%d\n",a,b);
	return ;
}
