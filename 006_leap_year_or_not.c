/*
 * This program will check whether a year is leap year or not
 * */

#include <stdio.h>

int main(void) {
	int year = 2008;
	
	if( (year % 4 == 0) || ( ( year % 100 != 0 ) && ( year % 400 == 0 )) ) {
		printf("It is a leap year\n");
	} else {
		printf("It is not a leap year\n");
	}
	return 0;
}
