#include<stdio.h>
#include "../inc/myheader.h"


int main()
{

#ifdef ADD
	printf("add result:%d\n",add(5,4));
#endif
#ifdef SUB
	printf("sub result:%d\n",sub(5,4));
#endif
	return 0;
}

