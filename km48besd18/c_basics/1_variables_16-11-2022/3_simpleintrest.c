//Calculation of simple interest.
#include<stdio.h>
int main()
{
	int p,n;
	float m,r,si;
	printf("enter values of principle,time in months,rate of interest");
	scanf("%d%d%f",&p,&n,&r);
	m=n/12.0;
	si=p*m*r/100;
	printf("%f",si);
	return 0;
	
}

