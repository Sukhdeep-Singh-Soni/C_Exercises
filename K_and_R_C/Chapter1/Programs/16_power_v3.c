/*
 program to calculate the power on m raised to the power n

 using call by value concept
*/

#include <stdio.h>

int power(int base, int n);

main() {
int i;

  for (i = 0; i < 10; ++i)
    printf("%d %d %d\n", i, power(2,i), power(-3,i));
}

int power(int base, int n) {
    int p;
    /* in call by value the actual parameter doesn't gets affected only the formal params get affected */
    for (p = 1; n > 0; --n)
        p = p * base;
    return p;
}