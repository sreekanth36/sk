#include"sk.h"
int valid(int d1,int m1,int y1,int d2,int m2,int y2)
{
	int a,b,x,c,d,y,m,p,n;
	c=0;
		if((y2<y1)||y1==y2 && m2<m1||y1==y2 && m1==m2 && d2<d1)
		{
			a=d1;b=m1;x=y1;
			d1=d2;m1=m2;y1=y2;
			d2=a;m2=b;y2=x;
		}
	switch(m1)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:if (d1<=31 && d1>0)
			{
				n=31;
				c=1;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:if(d1<=30 && d1>0)
			{
				n=30;
				c=1;
			}
			break;
		case 2: if ((y1%100!=0 && y1%4==0)||(y1%400==0))
			{
				if (d1<=29 && d1>0)
				{
					n=29;
					c=1;
				}
			}
			else 
				if (d1<=28 && d1>0)
				{
					n=28;
					c=1;
				}
			break;
		default :
			c=0;
			break;
	}
	if(c==1)
	{
		c=0;
		if (m2<=12)
		{
			switch(m2)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:if (d2<=31 && d2>0)
						c=1;
					break;
				case 4:
				case 6:
				case 9:
				case 11:if(d2<=30 && d2>0)
						c=1;
					break;
				case 2: if ((y2%100!=0 && y2%4==0)||(y2%400==0))
					{
						if (d2<=29 && d2>0)
							c=1;
					}
					else 
						if (d2<=28 && d2>0)
							c=1;
					break;
			}
		}
	}
	if (c==1)
	{
		m=month(d1,d2,m1,m2,y1,y2);
		d=day(d1,d2,m1,m2,y1,y2,n);
		d=d+m;
		printf("%d days\n",d);
		return 1;
	}
	else
		return 0;
}

