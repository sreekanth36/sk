/*9)Find the power bill for the input number of units :
  0 - 200 units : 100/- min
  201 - 400 units : 100 + 0.65 per unit excess of 200
  401 - 600 units : 230 + 0.80 per unit excess of 400
  601 and above units : 390 + 1.00 per unit excess of 600*/

#include<stdio.h>
int main()
{
	int u;
	float r;
	printf("enter no.of units\n");
	scanf("%d",&u);
	if (u<201)
		printf("The no.of units:%d\nThe cost is:%f\n",u,r=100);
	else if (u<401)
		printf("The no.of units:%d\nThe cost is:%f\n",u,r=100+0.65*(u-200));
	else if(u<601)
		printf("The no.of units:%d\nThe cost is:%f\n",u,r=230+0.80*(u-400));
	else
		printf("The no.of units:%d\nThe cost is:%f\n",u,r=390+(u-600));
	return 0;
}



