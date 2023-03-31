/*2.Write the following program :
Declare a character array without size.
Initialize the array with characters of your name.
Print your name using for loop. */


#include<stdio.h>
int main()
{
	char sk[]={'S','R','E','E',' ','K','A','N','T','H'};
	int i;
	for (i=0;i<10;i++)
		printf("%c",sk[i]);
	printf("\n");
	return 0;
}

