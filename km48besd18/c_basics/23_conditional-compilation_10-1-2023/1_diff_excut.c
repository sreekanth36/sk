/*1)"1. Need to display different welcome messages depending on the operating system. Define the macro inside the code and compile the following into 3 different executables.
 * for WINDOWS : Microsoft Windows Welcomes you
 * for Linux : Linux Welcomes you
 * for Mac : Mac Welcomes you*/

#include<stdio.h>
#define sk 1
int main()
{

#if sk==1
	printf("Microsoft Windows Welcomes you\n");
#elif sk==2
	printf("Linux Welcomes you\n");
#elif sk==3
	printf("Mac Welcomes you\n");
#endif

return 0;
}
