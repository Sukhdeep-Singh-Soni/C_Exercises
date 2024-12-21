/*
 * This program will find the factorial of a number
 * */

#include <stdio.h>

void factorial_iteration(int n);
unsigned long long int factorial_recursion(int n);

int main(void) {
	int num = 13;

	factorial_iteration(num);

	num = 9;
	printf("factorial with recursion : %lld\n",factorial_recursion(num));
	return 0;
}

//calculating factorial using iteration
void factorial_iteration(int n) {
	unsigned long long int fact = 1;

	for(int i = 1; i <= n; i++) {
		fact = fact * i;
	}

	printf("iteration factorial : %lld\n", fact);
}

//calculating factorial using recursion
unsigned long long int factorial_recursion(int n) {
	if(n == 0) {
		return 1;
	}

	//recursive call
	return n * factorial_recursion(n-1);
}

//end
