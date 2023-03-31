//9)Declare an integer array of size 10 and initialize it to some values. Print the addresses of each element of the array using a pointer. using indirection operator , print the value stored in each element of the array.


#include<stdio.h>
int main()
{
	int sk[10]={1,2,3,4,5,6,7,8,9,10};
	int *s=0,i;
	for(i=0;i<10;i++)
	{
		s=&sk[i];
		printf("address is:%p value is:%d\n",s,*s);
	}
	return 0;
}
