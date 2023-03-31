#include"sk.h"
int month(int d1,int d2,int m1,int m2,int y1,int y2)
{
	int m=0,n=12;
	m1+=1;
	for (;y1<=y2;y1++)
	{
		if(y1==y2)
			n=m2-1;
		for (;m1<=n;m1++)
		{

			switch(m1)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:m+=31;
					break;
				case 4:
				case 6:
				case 9:
				case 11:m+=30;
					break;
				case 2: if ((y1%100!=0 && y1%4==0)||(y1%400==0))
					{
						m+=29;
						break;

					}
					else 
					{
						m+=28;
						break;
					}
			}
			
		}
		m1=1;
	}
	return m;
}
int day(int d1,int d2,int m1,int m2,int y1,int y2,int n)
{
	int d=0;
	if (d1==d2 && m1==m2 && y1==y2)
		d=0;
	else if (y1==y2 && m1==m2 && d1<d2)
		d=d2-d1;
	else
	{
		for( ;d1<n;d1++)
			d++;
		d+=d2;
	}
	return d;

}
