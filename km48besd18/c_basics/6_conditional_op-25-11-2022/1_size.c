//1)Write a program to print the size of various data types in C.

#include<stdio.h>
int main()
{
	int x;
	float f;
	char c;
	double d;
	long double ld;

	printf("%lu\n%lu\n",sizeof(x),sizeof(int));
	printf("%lu\n%lu\n",sizeof(f),sizeof(float));
	printf("%lu\n%lu\n",sizeof(c),sizeof(char));
	printf("%lu\n%lu\n",sizeof(float),sizeof(int));
	printf("%lu\n%lu\n",sizeof(char),sizeof(float));
	printf("%lu\n%lu\n",sizeof(long double),sizeof(int));
	printf("%lu\n%lu\n",sizeof(double),sizeof(int));
	printf("%lu\n%lu\n",sizeof(long double),sizeof(double));







}
