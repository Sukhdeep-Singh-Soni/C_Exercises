/*
 * The program will count characters from intput
 * with double precision float range
 * */

#include <stdio.h>

/* count characters in input: 2nd version */
main() {
  double nc;	/* taken a double(double precision float) for the count not to overflow on long int also */

  for (nc = 0; getchar() != EOF; ++nc)	/* The program must pass the no input/ zero input and boundary conditions, for and while loop are good choices for
  					 * checking boundary conditions as they check the condition at top only */
    ; /* this statement is satisfying the requirement for C syntax that for/while must have a body, this ;(semicolon) indicates a null statement */

  printf("%.0f\n", nc); /* %.0f - supresses the decimal point and digits after it which are zero in this case */
}
