#include"sk.h"
int char_num(char c)
{
	if ((c>='a' && c<='z')||(c>='A' && c<='Z'))
		return 1;
	else if (c>='0' && c<='9')
		return 0;
	return 2;
}
