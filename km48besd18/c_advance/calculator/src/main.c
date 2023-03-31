
#include"../inc/sk.h"
int main()
{
	int a=2,b=2;
	printf("a=%d b=%d\n",a,b);
#ifdef ADD
	printf("add is:%d\n",add(a,b));
#endif
#ifdef SUB
	printf("sub is:%d\n",sub(a,b));
#endif
#ifdef MUL
	printf("mul is:%d\n",mul(a,b));
#endif
#ifdef DIV
	printf("div is:%d\n",div(a,b));
#endif
}
