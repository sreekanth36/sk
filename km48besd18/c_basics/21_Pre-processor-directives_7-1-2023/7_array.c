/*7)Define  a macro that receives an array and the number of elements in the array as arguments. Write a program using this macro to print out the elements of an array.*/
#include<stdio.h>
#define sk(s,n) for(i=0;(i<n);i++) printf("%d ",s[i]);
int main()
{
	int n,i=0;
	printf("enter array length\n");
	scanf("%d",&n);
	int R[n];
	for(i=0;i<n;i++)
	{
		printf("enter a value\n");
		scanf("%d",&R[i]);
	}
	sk(R,n)
	return 0;


}
