#include<stdio.h>
int main()
{
	int y,y1,m,m1,d,d1;
	scanf("%d%d%d%d%d%d",&d,&m,&y,&d1,&m1,&y1);
	if ((y==y1)&&(m==m1)&&(d==d1))
		printf("both are same");
	else if ((y==y1)||(y>y1))
		if ((m==m1)||(m>m1))
			if ((d==d1)||(d>d1))
				printf("person born on %d %d %d is old\n",d1,m1,y1);
			else
				printf("person born %d %d %d is old\n",d,m,y);
		else
			printf("person born on %d %d %dis old\n",d,m,y);
	else 
		printf("person born on %d%d%d",d,m,y);
	return 0;
}
