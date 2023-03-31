#include <stdio.h>

int reverse(int n) {

	int rev = 0;
	while (n != 0) {

		rev <<= 1;          
		rev |= n & 1;       
		n >>= 1;            
	}
	return rev;
}

int main() {

	int num;
	printf("Enter an integer: ");
	scanf("%d", &num);
	printf("Reverse of %d is %d\n", num, reverse(num));
	return 0;
}

