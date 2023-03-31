/*11) Read two numbers from the user, and print all odd numbers between those numbers and then all even numbers.
  eg., inputs: 10   20
output: 
even numbers: 10 12 14 16 18 20
odd numbers: 11 13 15 17 19 */

#include<stdio.h>
int main()
{
	int i,m,n,a;
	printf("enter 2 values\n");
	scanf("%d%d",&m,&n);
	if (m%2==0)
	{
		i=m;
		a=m+1;
	}
	else
	{
		i=m+1;
		a=m;
	}
	printf("output:\n");
	printf("even numbers: ");
	while(i<=n)
	{
		printf("%d ",i);
		i=i+2;
	}
	printf("\n");
	printf("odd numbers: ");
	while(a<=n)
	{
		printf("%d ",a);
		a=a+2;
	}
	printf("\n");
	return 0;
}
