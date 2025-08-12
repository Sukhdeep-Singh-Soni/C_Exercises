/*
 The program will count the occurances of each digit, white space and all other characters
 using switch statement.

 version 2.0
 version 1.0 is in Chapter1/13_digit_occurances.c
*/

#include <stdio.h>

main() {    /* count digits white spaces and others */
    int c, nwhite, nother, ndigit[10];

    nwhite = nother = 0;
    for (int i = 0; i < 10; i++)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF) {
        switch (c) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                ndigit[c - '0']++;
                break;
            case ' ':
            case '\n':
            case '\t':
                nwhite++;
                break;
            default:
                nother++;
                break;
        }
    }
    printf("digits = ");
    for (int i = 0; i < 10; i++)
        printf("%d ", ndigit[i]);
    printf(", white spaces = %d, other chars = %d\n", nwhite, nother);
}