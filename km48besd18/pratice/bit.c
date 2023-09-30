#include <stdio.h>
int main()
{
	unsigned int a=0x12345678,x=0x12345678;
	int c=0,i=0;
	char b;
//getchar();
/*	for(;i<32;)
	{
		b=getchar();
		getchar();
		if(b=='1')
		{
			c|=(0x1<<i);
		}
//	printf("%c\n",b);
		i++;
//		b=b/10;
//		c=c<<1;
	if(b!='0' && b!='1')
		break;
	}
	printf("c=%d\n",c);
*/	printf("%x\n",(a>>8 & 0x0000FF00));
	printf("%x\n",(a<<24)|(a>>24)|(a<<8 & 0x00FF0000)|(a>>8 & 0x0000FF00));
	b=((x >> 24) & 0xff) | ((x << 8) & 0xff0000) | ((x >> 8) & 0xff00) | ((x << 24) & 0xff000000);
	printf("%x\n",b);
}

