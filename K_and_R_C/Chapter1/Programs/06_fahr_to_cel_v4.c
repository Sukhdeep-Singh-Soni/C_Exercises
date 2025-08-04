/*
 * Fahrenheit to celsius convertion program using for loop
 * */

#include <stdio.h>

#define LOWER	0	/* lower limit of table*/
#define UPPER	300	/* upper limit, Any occurance of UPPER(not in quotes or not part of another name) will be replaced by 300 */
#define STEP	20	/* its a bad practice to bury magic numbers like 20, 300 into program, convey little info to reader, hard to change in big programs */

main() {
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)		/* The for loop is a generalization of a while loop */
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
}
