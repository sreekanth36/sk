// 3. WAP to count the bits set (bit value 1 ) in an integer? Find out and compare different possibilities?

#include<stdio.h>

int main()
{
	int x,p=0;
	printf("enter a value\n");
	scanf("%d",&x);
	while(x)
	{
		if(x & 0x1)
			p++;
		x=x>>1;
	}
	printf("number of ones are:%d\n",p);
}
