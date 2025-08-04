/*
 * This program will print Fahrenheit to Celsius table in the steps 20
 * The formula to convert Fahrenheit to celsius is "Cel = (5/9) * (Fahr - 32)".
 *
 * floating point version with printf output formatting
 * */

#include <stdio.h>

main() {
  float fahr, celsius;		/* declared as floating point values */
  int lower, upper, step;

  lower = 0;	/* lower limit of temperature scale */
  upper = 300;  /* upper limit */
  step  = 20;   /* step size */

  fahr = lower;	/* if one value is float and another is int then the int will auto convert to float and assigned to float */
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0); 	/* A decimal point with 0 in float constants emphasizes their floating point nature to readers */
    printf("%3.0f %6.1f\n", fahr, celsius);	/* %d - int , %f - float/double, %3.0d - print 3 chars wide right justified with no digits after decimal
						 * point, %6.1f - six chars wide right justified with one digit after decimal point */
    fahr = fahr + step;
  }
}
