/*
 * This program will swap numbers using xor operator
 * */

#include <stdio.h>

int main(void) {
	int a = 20, b = 57;

	printf("before swap : a = %d, b = %d\n", a,b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("before swap : a = %d, b = %d\n", a,b);

	return 0;

}
