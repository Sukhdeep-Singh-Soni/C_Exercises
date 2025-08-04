/*
Write a program to calculate the Power of a Number using Recursion in C.
*/

#include <stdio.h>

int power_recur(int n, int exp);

int main(void) {
    int n = 2;
    int exp = 3;

    printf("power of %d to the power %d is = %d", n, exp, power_recur(n, exp));

    return 0;
}

int power_recur(int n, int exp) {
    if (exp == 0)
        return 1;
    
    return n * power_recur(n, exp-1);
}

/*
 2 * power_recur(2, 3)              return 2 * 2 * 2 * 1
    2 * power_recur(2, 2)           return 2 * 2 * 1
        2 * power_recur(2, 1)       return 2 * 1
            2 * power_recur(2, 0)   return 1   
*/