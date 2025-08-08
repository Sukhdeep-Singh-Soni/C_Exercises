/*
 The program will convert the upper case alphabet to lower case
*/

#include <stdio.h>

int lower(int c) {
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

main() {
    extern int lower(int c);

    printf("%c\n", lower('A'));
    printf("%c\n", lower('Z'));
    printf("%c\n", lower('F'));
    printf("%c\n", lower('D'));
    printf("%c\n", lower('w'));
}