//3) Write a function that can rotate the values of three variables. print the results in main function.


#include<stdio.h>
void rotate(int *a,int *b,int *c);
int main()
{
	int a,b,c;
	printf("enter 3 values\n");
	scanf("%d%d%d",&a,&b,&c);
	rotate(&a,&b,&c);
	printf("a:%d b:%d c:%d\n",a,b,c);
	return 0;
}
void rotate(int *a,int *b,int *c)
{
	int x;
	x=*a;
	*a=*b;
	*b=*c;
	*c=x;
}
