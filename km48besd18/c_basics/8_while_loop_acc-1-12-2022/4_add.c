/*4) Write a program to print the value of below series:
  1 - 1/2 + 1/3 - 1/4 .... + 1/n etc*/

#include<stdio.h>
int main()
{
	int i=1,n;
	float s;
	printf("enter max value\n");
	scanf("%d",&n);
	while(i<=n)
	{
		if (i==1)
			s=i;
		else if (i%2==0)
			s+=((float)1/-i);
		else
			s+=((float)1/i);
		++i;
	}
	printf("%.2f",s);
	return 0;
}
