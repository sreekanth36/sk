/*1.Write the following program :
Declare an integer array of size 100.
Assign numbers 1-100 to each element of the array.
Print all the numbers.
Print all even elements.
Print all odd elements.
Add 5 to each element and print 6 – 105 numbers. */


#include<stdio.h>
int k[100];
int i;
int main()
{
	for (i=0;i<100;i++)
		k[i]=i+1;
	printf("All numbers\n");
	for (i=0;i<100;i++)
		printf("%d  ",k[i]);
	printf("\neven elements\n");
	for (i=1;i<100;i+=2)
		printf("%d  ",k[i]);
	printf("\nodd elements\n");
	for (i=0;i<100;i+=2)
		printf("%d  ",k[i]);
	printf("\n5 to each element\n");
	for (i=0;i<100;i++)
		printf("%d  ",k[i]+5);
	printf("\n");
	return 0;
}
