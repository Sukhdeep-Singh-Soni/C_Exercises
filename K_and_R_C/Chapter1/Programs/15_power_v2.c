/*
 Program to calculate the power of a number
 (old style syntax version)
*/

#include <stdio.h>

 int power();

main() {
  int i;

  for (i = 0; i < 10; ++i)
    printf("%d %d %d\n", i, power(2,i), power(-3,i));
}

power(base, n)
int base, n;
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; i++)
      p = p * base;
    
    return p;
}
