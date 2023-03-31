#include"sk.h"
void sk()
{
	static int s=1;
	if (s%10==1)
	printf("Hello! I am called %dst time\n",s);
	else if (s%10==2)
	printf("Hello! I am called %dnd times\n",s);
	else if (s%10==3)
	printf("Hello! I am called %drd times\n",s);
	else
	printf("Hello! I am called %dth times\n",s);
	s++;
}
