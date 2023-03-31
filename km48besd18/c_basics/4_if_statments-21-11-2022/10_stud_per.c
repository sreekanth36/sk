/*10)Find the % of marks for 6 subjects, for a student, and print the grade of the student as per below division , using if else statement.
  80 - 100        : Honours
  60 - 79         : First Division
  50 - 59         : Second Division
  40 - 49         : Third Division
  0 - 39          : Fail*/

#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	float p;
	printf("enter subject values\n");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	p=(a+b+c+d+e+f)/6;
	if (p<40)
		printf("your grade is fail:%f\n",p);
	else if(p<50)
		printf("your grade is Third Division:%f\n",p);
	else if(p<60)
		printf("your grade is Second Division:%f\n",p);
	else if(p<80)
		printf("your grade is First Division:%f\n",p);
	else
		printf("your grade is Honour:%f\n",p);
	return 0;
}




