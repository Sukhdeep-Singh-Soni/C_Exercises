/*
 * Program to find the GCD of two numbers
 * */

#include <stdio.h>

int get_gcd(int num1, int num2);

int main(void) {
	int num1 = 15;
	int num2 = 10;

	printf("gcd of %d and %d is : %d\n",num1, num2, get_gcd(num1, num2));

	return 0;
}

int get_gcd(int a, int b) {
	//get smaller between two numbers
	int result = (a < b) ? a : b;

	while(result > 0) {
		if(a % result == 0 && b % result == 0)
			return result;
		result--;
	}
}
