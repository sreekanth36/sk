//6) Write two source files, main.c and swap.c. The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.


#include"sk.h"
int main()
{
	int sk[2];
	printf("enter 2 values\n");
	scanf("%d%d",&sk[0],&sk[1]);
	swap(&sk[0],&sk[1]);
	printf("1st:%d 2nd:%d\n",sk[0],sk[1]);
	return 0;
}
