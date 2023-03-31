/*5) "Write a function that communicates with main using a single static variable without taking any input arguments.
Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.
eg., print the square of each number of an array :
for each number of the array :
    call the function
    main gets the static variable address as return value from function.
    main puts the array element in static variable.
in the function :
    create static variable.
    if static variable value is not zero, print its square.
    function sends static variable address back to main.*/


#include<stdio.h>
int * square();
int main()
{
	int n,i,*p=square();
	printf("enter max count\n");
	scanf("%d",&n);
	int sk[n];
	for(i=0;i<n;i++)
	{
		printf("enter a value\n");
		scanf("%d",&sk[i]);
	}
	for(i=0;i<n;i++)//i<=n
	{
		*p=sk[i];
		p=square();
//		*p=sk[i];
	}
}
int * square()
{
	static int x;
	if(x>0)
		printf("x:%d output:%d\n",x,x*x);
	return &x;
}
