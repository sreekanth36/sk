//7)Take an integer as input and print its magnitude (remove sign).

#include<stdio.h>
int main()
{
	int a;
	printf("enter a value\n");
	scanf("%d",&a);
	printf("%d is postive\n",(a>=0)?a:(-a));
}
