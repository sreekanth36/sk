/*1)define a macro to generate swapping function for int, float , double and character datatypes, as a generic function using macros.*/
#include<stdio.h>
#define GEN(dt,p) void sk##dt(dt x,dt y)\
			{\
				dt t; t=x,x=y,y=t;\
				printf(#dt":"#p" "#dt":"#p " \n",x,y);\
				return ;\
			}
GEN(int,%d)
GEN(float,%f)
GEN(char,%c)
GEN(double,%lf)
//GEN(long,%hd)
int main()
{
	int x=1,y=2;
	skint(x,y);
	float a=1,b=2;
	skfloat(a,b);
	char c='a',d='b';
	skchar(c,d);
	double m=1,n=2;
	skdouble(m,n);
	return 0;
}


