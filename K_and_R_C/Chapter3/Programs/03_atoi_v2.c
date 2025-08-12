/*
ascii to integer conversion program which handles leading white spaces and leading +/- sign

skip white space, if any
get sign, if any
get integer part and convert it 

version 2.0
version 1.0 is in Chapter2/03_atoi.c
*/

#include <stdio.h>
#include <ctype.h>

int atoi(char s[]) {
    int n, i, sign;

    for (i = 0; isspace(s[i]); i++) /* skip leading white spaces */
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-') /* skip sign*/
        i++;    
    for (n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');
    return sign * n; 
}

main() {
    printf ("%d\n", atoi("   12345"));
    printf ("%d\n", atoi("   +12345"));
    printf ("%d\n", atoi("   -12345"));
    printf ("%d\n", atoi("+12345"));
}
