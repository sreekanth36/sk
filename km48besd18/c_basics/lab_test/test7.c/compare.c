#include"sk.h"
int datecompare(int d1,int m1,int y1,int d2,int m2,int y2)
{
	if(y2<y1||(y2==y1 && m2<m1)||(y2==y1 && m2==m1 && d2<d1))
		return 1;
	return 0;
}
