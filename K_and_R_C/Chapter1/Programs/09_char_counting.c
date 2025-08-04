/*
 * The program will count characters from intput
 * */

#include <stdio.h>

/* count characters in input: 1st version */
main() {
  long nc;	/* taken a long int data type as characters could exceed int range */

  nc = 0;
  while (getchar() != EOF)
    ++nc; /* counting */

  printf("%ld\n", nc); /* %ld - long integers */
}
