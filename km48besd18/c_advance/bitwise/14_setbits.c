/* 14. Write a functionsetbits(x,p,n,y)that returns x with then bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.

e.g. if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3 and p = 6 then
you need to strip off 3 bits of y (111) and put them in x at position 10xxx010 to get answer
10111010. Your answer should print out the result in binary form although input can be in
decimal form.
Your output should be like this:
x = 10101010 (binary)
y = 10100111 (binary)
setbits n = 3, p = 6 gives x = 10111010 (binary).
*/

#include<stdio.h>

int main()
{
	int x,y,a,b;
	printf("enter two values\n");
	scanf("%d%d",&x,&y);
	printf("enter no.of bits to shift and which postion to switch\n");
	scanf("%d%d",&a,&b);
	if(a<=b)
	{
		for(;a>=0;a--,b--)
		{
			if(y & 0x1<<a)
				x=(x | 0x1<<b);
			else
				x=x & ~(0x1<<b);
		}
		a=x;
		b=0;
		while(a)
		{
			a=a>>1;
			b++;
		}
		printf("output in binary\n");
		while(b)
		{
			if(x & (0x1 << --b))
				printf("1");
			else
				printf("0");
		}
	}
	else
		printf("enter valid input");
	printf("\n");
}
