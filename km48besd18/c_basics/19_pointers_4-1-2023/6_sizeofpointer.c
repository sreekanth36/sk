//6)declare different pointers with different data types. Print the sizes of the pointer variables using sizeof operator. Why do u think all of them are giving same size irrespective of the data type?


#include<stdio.h>
int main()
{
	int x=1;int *a=&x;
	float y=1; float *b=&y;
	char z=1; char *c=&z;
	double w=1; double *d=&w;
	printf("int:%lu float:%lu char:%lu double:%lu\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
	return 0;
}
