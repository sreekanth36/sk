#include<stdio.h>
int main()
{
	int d1,d2,m1,m2,y1,y2;
	scanf("%d%d%d%d%d%d",&d1,&m1,&y1,&d2,&m2,&y2);
	if ((d1==d2)&&(m1==m2)&&(y1==y2))
		printf("same");
	else if (y1>y2)
		printf("%d %d %d\n",d2,m2,y2);
	else if ((y1>=y2)&&(m1>=m2)&&(d1>=d2))
		printf("%d %d %d\n",d2,m2,y2);
	else 
		printf("%d %d %d\n",d1,m1,y1);
	return 0;
}
