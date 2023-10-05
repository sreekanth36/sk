#include<stdio.h>

int add(int ,int ); // function prototype
int tmp=10;
static int y=4;
int main()
{
	int ret;

	ret = add(5,4); // function call
	printf("add result:%d\n",ret);
	return 0;
}

