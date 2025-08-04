/*
 * Basic hello world print on stdout
 * */

#include <stdio.h>	/* standatd input output library */

main() {
  printf("Hello ");  /* printf function whose prototype is present in stdio.h.*/
  printf("World");   /* will not add new line, instead will print after the "Hello " string */
  printf("\n");	     /* This will print a newline*/
}
