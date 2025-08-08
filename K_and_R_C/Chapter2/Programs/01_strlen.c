/*
 This program will print the string length of the string passed as an argument
*/

#include <stdio.h>

int strlen(char *s) {
    int i;

    i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}

main() {
    extern int strlen(char *s);

    char str[] = "The length of this string will get returned";
    printf("%d\n", strlen(str));
}
