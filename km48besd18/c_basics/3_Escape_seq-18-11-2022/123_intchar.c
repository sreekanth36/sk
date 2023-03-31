//1)Write a program that reads an integer and displays the right-most digit of the number.
//(Eg: User enters, 456, the output should be 6).

//2)Read a character and print its ascii value.

//3)Read an integer and print its character value.

#include<stdio.h>
int main()
{
	int x=1234,y=98;
	char c='A';
	printf("%d\n%d\n%c\n",x%10,c,y);
	return 0;
}
