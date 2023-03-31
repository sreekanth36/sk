/*3)define a macro that generates a function that returns the sum of array elements, for different data typed arrays.*/
#include<stdio.h>
#define GEN(dt,p) dt sk##dt(dt *ar,int n)\
	{ int i;\
		dt s=0;\
		printf("enter "#dt" values \n");\
		for(i=0;i<n;i++)\
			scanf(" "#p,ar+i);\
		for(i=n-1;i>=0;i--)\
		s=s+*(ar+i);\
		return s;\
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
	printf("sum is:%d\n",skint(ar,n));
	float ar1[n];
	printf("sum is:%.2f\n",skfloat(ar1,n));
	double ar2[n];
	printf("sum is:%.2lf\n",skdouble(ar2,n));
	return 0;
	
}
