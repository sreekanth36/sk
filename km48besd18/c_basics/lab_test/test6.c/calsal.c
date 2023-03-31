#include"sk.h"
int calculatenetsalary(int total,int lop,int m,int y)
{
	int s;
	s=total-lop*total/(float)noofdaysinmonth(m,y);
	return s;
}

