//5) Read 3 variable values and rotate their values and print back.
//eg., input 4 5 6 (Stored in a, b,c)
//     output: 5 6 4 ( print a, b,c)

#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d=a;
	a=b;
	b=c;
	c=d;
	printf("%d %d %d",a,b,c);
	return 0;
}
