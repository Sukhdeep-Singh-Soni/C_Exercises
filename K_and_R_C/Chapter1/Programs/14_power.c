/*
 Program to calculate the power of a number
*/

#include <stdio.h>

int power(int m, int n);

main() {
  int i;

  for (i = 0; i < 10; ++i)
    printf("%d %d %d\n", i, power(2,i), power(-3,i));
}

int power(int base, int exp) {
    int i, p;

    p = 1;
    for (i = 1; i <= exp; i++)
      p = p * base;
    
    return p;
}
