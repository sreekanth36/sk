/*2) write a function to receive the structure as a call by reference argument, and read its data using scanf function. Print the data using a function, which receives the structure as a call by value argument.*/

#include"sk.h"
void print(std s[]);
void swap(std ,std s[]);
void scan(std s[]);
int main()
{
	std s[n];
	scan(s);
	swap(s[1],s);
	print(s);
	return 0;
}





