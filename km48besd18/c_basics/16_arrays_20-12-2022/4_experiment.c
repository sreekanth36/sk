/*4.Try experimenting with the below array syntaxes and see the results,check their sizes, try to also read values for elements and print them:</br>
int arr[5] = {};
int arr[10] = {2.4,5.6,7.3};
int arr[3] = {1,2,3,4,5};
int arr[0] = {};
int arr[0] = {1,2,3,4,5};
int arr[] = {};
int arr[‘a’];*/


#include<stdio.h>
int main()
{
	int i;
	int sk[0]={1,2,3,4,5};
	for (i=0;i<0;i++)
		printf("%d ",sk[i]);
		printf("size is:%lu\n",sizeof(sk));
	int sk1[5]={};
	for (i=0;i<5;i++)
		printf("%d ",sk1[i]);
		printf("size is:%lu\n",sizeof(sk1));
	int sk2[10]={2.4,5.6,7.3};
	for (i=0;i<10;i++)
		printf("%d ",sk2[i]);
		printf("size is2:%lu\n",sizeof(sk2));
	int sk3[3]={1,2,3,4,5};
	for (i=0;i<3;i++)
		printf("%d ",sk3[i]);
		printf("size is3:%lu\n",sizeof(sk3));
	int sk4[0]={};
	for (i=0;i<0;i++)
		printf("%d n",sk4[i]);
		printf("size is:%lu\n",sizeof(sk4));
	int sk5['a'];
	for (i=0;i<'a';i++)
		printf("%d ",sk5[i]);
		printf("size is:%lu\n",sizeof(sk5));
//int SK6[]={};
//printf("%d",sk6);
}
