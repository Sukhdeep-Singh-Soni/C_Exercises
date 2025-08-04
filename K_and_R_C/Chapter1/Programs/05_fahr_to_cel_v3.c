/*
 * Fahrenheit to celsius convertion program using for loop
 * */

#include <stdio.h>

main() {
  int fahr;

  for (fahr = 0; fahr <= 300; fahr = fahr + 20)		/* The for loop is a generalization of a while loop */
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
}
