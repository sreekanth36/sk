#include"sk.h"
int date(int d,int m,int y,int d1,int m1,int y1)
{
	int c=0;
		if (m<=12)
		{
			switch(m)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:if (d<=31 && d>0)
					c=1;
				break;
				case 4:
				case 6:
				case 9:
				case 11:if(d<=30 && d>0)
					c=1;
				break;
				case 2: if ((y%100!=0 && y%4==0)||(y%400==0))
					{
					if (d<=29 && d>0)
						c=1;
					}
					else 
						if (d<=28 && d>0)
							c=1;
					break;
			}
		}
		if (c==1)
		{
			c=0;
			if (m1<=12)
			{
				switch(m1)
				{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:if (d1<=31 && d1>0)
					c=1;
				break;
				case 4:
				case 6:
				case 9:
				case 11:if(d1<=30 && d1>0)
					c=1;
				break;
				case 2: if ((y1%100!=0 && y1%4==0)||(y1%400==0))
					{
					if (d1<=29 && d1>0)
						c=1;
					}
					else 
						if (d1<=28 && d1>0)
							c=1;
					break;
				}
			}
		}
	if (c==1)
	{
		if ((y<y1)||(y==y1 && m<m1)||(y==y1 && m==m1 && d<d1))
			return 1;
		return 0;
	}
	else
		return 2;
}
