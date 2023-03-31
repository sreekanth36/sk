//11.Write a function to return the average of marks of all students in a class.


#include<stdio.h>
int avg(int sk[],int);
int main()
{
	int n;
	printf("enter no.of students\n");
	scanf("%d",&n);
	int sk[n];
	printf("avg of marks:%d\n",avg(sk,n));
	return 0;
}
int avg(int sk[],int n)
{
	int i,s=0,a;
	for(i=0;i<n;i++)
	{
		printf("enter marks value\n");
		scanf("%d",&a);
		sk[i]=a;
		s+=sk[i];
	}
	return s/n;
}
