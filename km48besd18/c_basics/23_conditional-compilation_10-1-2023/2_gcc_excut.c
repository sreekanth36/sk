/*2)"1. Need to display different welcome messages depending on the operating system. Define the macro from gcc command. Implement a warning incase the macro is not defined.
 * for WINDOWS : Microsoft Windows Welcomes you
 * for Linux : Linux Welcomes you
 * for Mac : Mac Welcomes you*/
#include<stdio.h>
#ifndef sk
#error marco not defined
#else
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
#endif
