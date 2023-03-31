//2) Read a 4 digit integer into a single variable, using the single variable, print the output in below format, using escape sequences and different formats:
//eg., input: 3476
//output expected:
//3
//34
//347 
//3476

//3) Read a 4 digit integer into a single variable, using the single variable, print the output in below format, using escape sequences and different formats:
//eg., input: 3476
//output expected:
//      3
//     34
//    347 
//   3476

#include<stdio.h>
int main()
{
	int a=3476;
	printf("%d\b\b\b   \n%d\b\b  \n%d\b \n%d\n",a,a,a,a);
	printf("%7d\b\b\b   \n%6d\b\b  \n%5d\b \n%d\n",a,a,a,a);
	return 0;
}
