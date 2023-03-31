//8)For one type of mobile service, if cost is 250/- upto 100 calls and 1.25/- for each call made over and above 100 calls. Write a program to read number of calls made and compute and print the bill.

#include<stdio.h>
int main()
{
	int c;
	float r;
	printf("enter no.of calls\n");
	scanf("%d",&c);
	if (c<100)
		
		printf("The no.of calls:%d\nThe bill is:%f\n",c,r=250);
	else
		r=250+1.25*(c-100);
		printf("The no.of calls:%d\nThe bill is:%f\n",c,r);
	return 0;
}

