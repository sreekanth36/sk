#include"sk.h"
int main()
{
	int d,m,y,n,i,d1,m1,y1;
	printf("enter max count\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
sk:
		printf("enter d,m,y values\n");
		scanf("%d%d%d",&d1,&m1,&y1);
		if(isvaliddate(d1,m1,y1))
		{
			goto sk1;
		}
		else
		{
			printf("enter valid date\n");
			goto sk;
		}
sk1:
		if(i==1)
		{
			d=d1;
			m=m1;
			y=y1;
		}
		else if(i>1)
		{
			if (datecompare(d,m,y,d1,m1,y1))
			{
				d=d1;
				m=m1;
				y=y1;
			}
		}
	}
	printdateinformat(d,m,y);
	return 0;
}

