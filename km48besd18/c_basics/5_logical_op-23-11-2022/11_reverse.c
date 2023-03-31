/*11)Input an alphabet. Output its case reverse.
  eg1., input: a
	output: A
  eg2:
	input: A
	output: a*/

#include<stdio.h>
int main()
{
	char c;
	printf("enter a value\n");
	scanf("%c",&c);
	if ((c>64)&&(c<91))
		printf("%c is reverse\n",c+32);
	else if ((c>96)&&(c<123))
		printf("%c is reverse\n",c-32);
	else 
		printf("%c is invalid\n",c);
	return 0;
}
