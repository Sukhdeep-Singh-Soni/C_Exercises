/*
 The program will reverse a string using 2 indices in parallel
*/

#include <stdio.h>
#include <string.h>

/* reverse: reverse string s in place */
void reverse(char s[]) {
    int c, i, j;

    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

main() {
    char str[] = "This is a revese string prog";
    printf("%s\n", str);
    reverse(str);
    printf("%s\n", str);
}