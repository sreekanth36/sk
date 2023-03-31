/*10.Write a program to swap two arrays in reverse order.
eg.,
input : array1 = {1,2,3,4,5};
array2 = {6,7,8,9,10};

output:

array1 : {10,9,8,7,6}
array2: { 5,4,3,2,1}*/


#include<stdio.h>
int main()
{
	int i,j,x;
	int sk[]={1,2,3,4,5};
	int sk2[]={6,7,8,9,10};
	for(i=0,j=4;i<5;i++,j--)
	{
		x=sk[i];
		sk[i]=sk2[j];
		sk2[j]=x;
	}
	printf("sk:output\n");
	for(i=0;i<5;i++)
		printf("%d ",sk[i]);
	printf("\nsk2:output\n");
	for(i=0;i<5;i++)
		printf("%d ",sk2[i]);
	printf("\n");
	return 0;
}

