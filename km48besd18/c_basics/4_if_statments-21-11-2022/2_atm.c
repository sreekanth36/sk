/*2) Complete the lab test question as an assignment by adding conditional statement, so that to print a denomination only if the denomination is not zero. Do not print 0 denominations.
If the amount entered is not divisible with 50 (not in multiples of 50) then print a message that the money cannot be dispensed as input is not valid.
At an ATM the denominations available are 2000/- , 500/- , 200/-, 100/-, 50/-

Program will take the amount to withdraw as an input. And will calculate and display the number of notes of each denomination to be dispensed. The amount should be entered as denominations of 50/- only. (Hint: Make use of / and % operators)

	eg., Enter the amount to withdraw: 12950

	Output expected:

	Money dispensed as follows:

	No of 2000/- notes: 6

	No of 500/- notes: 1

	No of 200/- notes: 2

	No of 50/- notes: 1

	eg., Enter the amount to withdraw: 57260

	Output expected :

	Amount not valid. Please enter amount only multiples of 50.*/
	
#include<stdio.h>
int main()
{ 
	int a,x,x1,x2,x3;
	printf("enter the amount withdraw");
	scanf("%d",&a);
	if (a%50==0)
	{ 
		if (a/2000>0)
			printf("no.of 2000/- notes%d\n",a/2000);
		x=a%2000;
		if (x/500>0)
			printf("no.of 500/- notes%d\n",x/500);
		x1=x%500;
		if (x1/200>0)
			printf("no.of 200/- notes%d\n",x1/200);
		x2=x1%200;
		if (x2/100>0)
			printf("no.of 100/- notes%d\n",x2/100);
		x3=x2%100;
		if (x3/50>0)
			printf("no.of 50/- notes%d\n",x3/50);
	}
		else printf("Amount not valid.Please enter amount only multiple of 50\n");
		return 0;
	
}



			


