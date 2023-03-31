//6)Write a function that takes principle, rate of interest and time in months as input arguments, and returns the total amount to be repayed, after calculation of simple interest.


#include<stdio.h>
int simple(int p,float n,int i);
int main()
{
	int p,n,i;
	float m,y;
	printf("enter principle,months and interest\n");
	scanf("%d%d%d",&p,&n,&i);
	y=n/12.0;
	m=simple(p,y,i);
	printf("Total amount to be repayed is:%.2f\n",m);
	return 0;
}
int simple(int p,float n,int i)
{
	float x;
	x=(p+(p*n*i)/100);
	return x;
}
