/*
 * The program will copy its input to its output one character at a time
 *
 * Algo :
 * read a character
 *  while (charater is not end-of-file indicator)
 *   output the character just read
 *   read a character
 * */

#include <stdio.h>

/* copy input to its output version 1 */
main() {
  int c;	/* taken a data type big enough to hold the EOF value, characters can be stored in char datatype EOF is int */

  c = getchar();	/* getchar() and putchar() are defiend in stdio.h, getchar() returns EOF a distinct value than any other characters */
  while(c != EOF) {	/* The EOF is defined in stdio.h */
    putchar(c);
    c = getchar();
  }
}
