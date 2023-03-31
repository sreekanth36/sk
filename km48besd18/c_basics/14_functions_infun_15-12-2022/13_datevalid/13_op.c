#include"sk.h"
int date (int d,int m,int y)
{
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
				return 1;
			case 4:
			case 6:
			case 9:
			case 11:if(d<=30 && d>0)
				return 1;
			case 2: if ((y%100!=0 && y%4==0)||(y%400==0))
				{
					if (d<=29 && d>0)
					return 1;
				}
				else 
					if (d<=28 && d>0)
						return 1;
		}
	}
	return 0;
}


