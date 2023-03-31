/*13) Extend the percentage marks program to print the grade of the student as per below division , using switch statement.
  80 - 100        : Honours
  60 - 79         : First Division
  50 - 59         : Second Division
  40 - 49         : Third Division
  0 - 39          : Fail*/

#include<stdio.h>
int main()
{
	int p;
	printf("enter marks values\n");
	scanf("%d",&p);
	switch(p/10)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			printf("your grade is fail:%d\n",p);
			break;
		case 4:
			printf("your grade is Third Division:%d\n",p);
			break;
		case 5:
			printf("your grade is Second Division:%d\n",p);
			break;
		case 6:
		case 7:
			printf("your grade is First Division:%d\n",p);
			break;
		case 8:
		case 9:
		case 10:
			printf("your grade is Honour:%d\n",p);
			break;
	}
	return 0;
}





