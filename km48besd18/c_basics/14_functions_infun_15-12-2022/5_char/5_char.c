/*5)Write a function to determine if a character is alphanumeric or not.
Hint: int fun_alpha_num(char c). 

eg., 5
character is numeric

eg., a
character is alphabet

eg., %
character is special character*/

#include"sk.h"
int main()
{
	int i;
	char c;
	printf("enter a character\n");
	scanf("%c",&c);
	i=char_num(c);
	if (i==0)
		printf("%c is numeric\n",c);
	else if (i==1)
		printf("%c is alphabet\n",c);
	else 
		printf("%c is special character\n",c);
	return 0;
}


