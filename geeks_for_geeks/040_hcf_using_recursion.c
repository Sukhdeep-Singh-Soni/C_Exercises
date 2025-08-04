/*
Write a Program to find the HCF of two Numbers using Recursion.
*/

#include <stdio.h>

int get_hcf_recur(int num1, int num2);

int main(void) {
	int num1 = 15;
	int num2 = 10;

	printf("gcd of %d and %d is : %d\n",num1, num2, get_hcf_recur(num1, num2));

	return 0;
}

int get_hcf_recur(int a, int b) {
	if (a == 0)
        return b;
    if (b == 0)
        return a;
    
    if (a == b)
        return a;

    if (a > b)
        return get_hcf_recur(a- b, b);
    return get_hcf_recur(a, b - a);
}
