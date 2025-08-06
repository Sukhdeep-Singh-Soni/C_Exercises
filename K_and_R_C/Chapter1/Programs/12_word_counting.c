/*
 * Program will count words lines and characters
 *
 * */

#include <stdio.h>

#define IN	1  // indicates the state of the word is in i.e. inside a word
#define OUT	0  // indicates the state of the word is out i.e. outside a word

main() {
  int c, state;
  int nc, nl, nw; // number of characters, lines and words

  nc = nl = nw = 0;	// assignment operation is an expression and the result is the result of left hand side and it is assocated from right to left
  state = OUT; // initially the state is outside a word
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t') // the logical || operator associated from left to right and the evaluation is stopped as soon as truth and false is known
	    state = OUT;
    else if (state == OUT) { // if and else if are control statements to control the flow of exceution of code. only one of the "if" and "else if" will execute
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nc, nl, nw);
}


