/* 5) Read an integer and print it back using function pointers for printf and scanf.

printf declaration to use : int printf(char * , ...);
scanf declaration to use : int scanf(char *, ...);

Try it again using alias name and array of function pointers.*/
#include<stdio.h>

int printf(const char * , ...);
int scanf(const char *, ...);
typedef int fp(const char * , ...);

int main()
{
	fp *sk[2]={printf,scanf};
	int a;
	sk[0]("enter a value\n");
	sk[1]("%d",&a);
	sk[0]("output=%d\n",a);
	return 0;
}
