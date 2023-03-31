//4) Read 2 variable values and swap their values (exchange) and print back.
//eg.,  input 4 5  (stored in a, b)
//	output : 5 4  ( print a and b)

#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("%d %d",a,b);
	return 0;
}


