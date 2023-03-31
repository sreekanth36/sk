/*2)define a macro to generate a generic function that takes & prints an array in reverse order. Generate the functions for int, float, double data types.*/
#include<stdio.h>
#define GEN(dt,p) void sk##dt(dt *ar,int n)\
	{ int i;\
		printf("enter "#dt" values \n");\
		for(i=0;i<n;i++)\
			scanf(" "#p,&ar[i]);\
		for(i=n-1;i>=0;i--)\
		printf(#p" ",*(ar+i));\
		printf("\n");\
	}
GEN(int,%d)
GEN(float,%f)
GEN(double,%lf)
int main()
{
	int n;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	int ar[n];
	skint(ar,n);
	float ar1[n];
	skfloat(ar1,n);
	double ar2[n];
	skdouble(ar2,n);
	return 0;
	
}
