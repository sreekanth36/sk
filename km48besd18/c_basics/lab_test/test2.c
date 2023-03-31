#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if ((a>=60)&&(b>=50)&&(c>=40))
		if(((a+b+c)>=200)||((a+b)>=150))
		printf("eligible\n");
		else
			printf("not eligible\n");
	else 
		printf("not eligible\n");
	return 0;
}
