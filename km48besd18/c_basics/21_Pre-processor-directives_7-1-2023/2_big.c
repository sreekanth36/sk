/*2)Write down a macro to find the biggest of four numbers using biggest of 2 macro.*/
#include<stdio.h>
#define s(a,b) (a>b?a:b)
#define max ((s(a,b))>(s(c,d))?s(a,b):s(c,d))
int main()
{
	int a,b,c,d;
	printf("enter 4 values\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%d is biggest of all\n",max);
	return 0;

}
