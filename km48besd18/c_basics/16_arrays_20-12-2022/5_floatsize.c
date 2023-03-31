/*5.Write the following program.
Declare an integer variable ‘size’.
Take the value of ‘size’ from user using scanf.
Declare an array of any datatype, and give the integer variable ‘size’, in place of size of the array  and initialize it to some values.(syntax: float array[size] = {1.0,2.5};)
Using for loop, try to take user input using scanf. Loop should execute ‘size’ number of times.
Using for loop, print the elements of the array.*/


#include<stdio.h>
int main()
{
	int n,i;
	printf("enter no.of size\n");
	scanf(" %d",&n);
	float sk[n];
	for(i=0;i<n;i++)
		scanf("%f",&sk[i]);
	for(i=0;i<n;i++)
		printf("%f ",sk[i]);
	printf("\n");
	return 0;
}
