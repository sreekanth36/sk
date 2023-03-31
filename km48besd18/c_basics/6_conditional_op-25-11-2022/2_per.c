//2)Find out the percentage of marks from 6 subjects(marks taken as integers) and print upto 2 digit precision.Conditional operator assignments (Flow chart will be same as if else)

#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter 6 values\n");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	a=(a+b+c+d+e+f)/6.0;
	printf("%.2f\n",(float)a);
}

