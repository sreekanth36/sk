//3) experiment with the predefined macro names.

#include<stdio.h>
int main()
{
	printf("%s\n",__TIME__);
	printf("%s\n",__DATE__);
	printf("%s\n",__FILE__);
#line 1
	printf("%d\n",__LINE__);
	printf("%d\n",__STDC__);
}
