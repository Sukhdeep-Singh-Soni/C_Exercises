/*
 * This program will count the number of occurances of each digit, whitespace characters(blanks tabs and newlines), other characters
 * 
 * since the character constants are small ints only/ ascii values, we can do arithmatic operation with them if c='0' then '0'-'0'=>0x48-0x48=0
 * */
/* if input is under ascii range of digits */
 /* clearing every element of arrary */
#include <stdio.h>

main() {
  int c, i, ndigit[10]; 	/* instead of creating 10 variables, using an array of 10 to keep count of each digit at their index number */
  int nwhite, nother; 		/* white space characters and other characters*/

  nwhite = nother = 0;
  for (i = 0; i < 10; ++i)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') 			
      ++ndigit[c-'0']; 	
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;
  }

  printf("digits =");
  for (i = 0; i < 10; ++i)
    printf(" %d", ndigit[i]);
  printf(", white spaces = %d, other = %d\n", nwhite, nother);
}
