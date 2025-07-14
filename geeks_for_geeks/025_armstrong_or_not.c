/* Program to check if a number is armstrong or not */

#include <stdio.h>
#include <math.h>

int get_num_of_digits(int n);
int is_armstrong(int x);

int main(void) {
    int num1 = 153;
    if (is_armstrong(num1))
        printf("number %d is armstrong\n", num1);
    else
        printf("number %d is not armstrong\n", num1);
}

int get_num_of_digits(int n) {
    int res = 0;
    while (n) {
        res++;
        n /= 10;
    }
    return res;
}

/* armstrong number e.g 153 = numeber of digits = 3, 1^3 + 5^3 + 3^3 = 153*/
int is_armstrong(int x) {
    int n = get_num_of_digits(x);
    int sum = 0;
    int val = x;

    while (x) {
        int rem = x % 10;
        sum += pow(rem, n);
        x /= 10;
    }

    if (sum == val)
        return 1;
    
    return 0;
}