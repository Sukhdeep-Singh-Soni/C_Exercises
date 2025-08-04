/*
 * This program will print Fahrenheit to Celsius table in the steps of 20
 * For e.g - 0 degree fahrenheit = -17 degree celsius
 * We are using limits from 0 to 300 here
 *
 * The formula to convert Fahrenheit to celsius is "Cel = (5/9) * (Fahr - 32)".
 * */

#include <stdio.h>

main() {
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;	/* lower limit of temperature scale */
  upper = 300;  /* upper limit */
  step  = 20;   /* step size */

  fahr = lower;
  while (fahr <= upper) {	/* a while loop which iterates until fahr becomes > 300 */
    celsius = 5 * (fahr - 32) / 9;		/* In C lang integer division truncates, 5/9 = 0. * and / have same precedence and left to right associativity
    						 * Therefore multiply will happen first then divide will happen */
    printf("%d\t\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
}
