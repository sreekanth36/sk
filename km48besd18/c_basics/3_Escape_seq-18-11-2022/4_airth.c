//4) read a 4 digit number and print it in the following formats using arithmetic operators / and %. write 5 different programs, one for each output:
//eg., 4532

//OP1:
//2                   
//3 
//5
//4

//OP2:
//4
//5
//3
//2

//OP3:
//4
//45
//453
//4532

//OP4:
//4532
//453
//45
//4

//OP5:
//2354

#include<stdio.h>
int main()
{
	int x=4532,x1,x2,x3,a1,a2,a3,b1,b2,b3,b4,b5,b6,b7;
	x1=x/10;
	x2=x1/10;
	x3=x2/10;
	a1=x/1000;
	a2=x/100;
	a3=x/10;
	b1=x%10;
	b2=x/10;
	b3=b2%10;
	b4=b2/10;
	b5=b4%10;
	b6=b4/10;
	b7=(b1*1000)+(b3*100)+(b5*10)+b6;
	printf("OP1:\n%d\n%d\n%d\n%d\n",x%10,x1%10,x2%10,x3%10);
	printf("\nOP2:\n%d\n%d\n%d\n%d\n",a1,a2%10,a3%10,x%10);
	printf("\nOP3:\n%d\n%d\n%d\n%d\n",x/1000,x/100,x/10,x);
	printf("\nOP4:\n%d\n%d\n%d\n%d\n",x,x/10,x/100,x/1000);
	printf("\nOP5:\n%d\n",b7);
	return 0;
}

