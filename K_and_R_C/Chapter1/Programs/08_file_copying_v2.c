/*
 * The program will copy its input to its output one character at a time
 * more compact version
 * */

#include <stdio.h>

/* copy input to its output version 1 */
main() {
  int c;	/* taken a data type big enough to hold the EOF value, characters can be stored in char datatype EOF is int */

  while((c = getchar()) != EOF) {	/* c = getchar() is an expression and it has a value which is the value of the left after assignment
  					 * This value is then compared against EOF and while loop takes descision based on that. The parenthesis
					 * around (c = getchar()) != EOF are necessary because the precedence of != is greater than = */
    putchar(c);
  }
}
