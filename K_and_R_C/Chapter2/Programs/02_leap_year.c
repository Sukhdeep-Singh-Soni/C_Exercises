/*
 The program will print whether a year is a leap year or not
*/

#include <stdio.h>

void is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Year %d is a leap year\n", year);
    else
        printf("Year %d is not a leap year\n", year);
}

main() {
    is_leap_year(1990);
    is_leap_year(2014);
    is_leap_year(1998);
    is_leap_year(2000);
    is_leap_year(2016);
}