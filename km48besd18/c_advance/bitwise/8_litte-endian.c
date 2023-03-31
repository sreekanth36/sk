// 8. WAP to convert Little endian integer to Big endian integer 

#include <stdio.h>

int main() 
{
	int x = 0x12345678;
	int big_endian_x = ((x >> 24) & 0xff) | ((x << 8) & 0xff0000) | ((x >> 8) & 0xff00) | ((x << 24) & 0xff000000);
	printf("Little-endian integer: %x\n", x);
	printf("Big-endian integer: %#x\n", big_endian_x);
	printf("Big-endian integer: %x\n", big_endian_x);

	return 0;
}

/*void show_mem_rep(char *start, int n)
{

	int i;
	for (i = 0; i < n; i++)
		printf("%.2x ", start[i]);
	printf("\n");
}

int main()
{
	int i = 0x01234567;
	printf("%x\n",i);
	show_mem_rep((char *)&i, sizeof(i));
//	getchar();
	return 0;
}*/
