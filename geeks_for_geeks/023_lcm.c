/*
 * Program to find the lcm of two numbers
 * */

#include <stdio.h>

int lcm(int a, int b);

int main(void) {
	int num1 = 15;
	int num2 = 25;

	printf("lcm of %d and %d is : %d\n",num1, num2, lcm(num1, num2));
}

int lcm(int a, int b) {
	int greater = (a > b) ? a : b;
	int smaller = (a < b) ? a : b;

	for(int i = greater; ; i += greater) {
		if(i % smaller == 0)
			return i;
	}
	return 0;
}
