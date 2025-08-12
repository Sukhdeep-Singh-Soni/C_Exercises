/*
The following function, trim, removes trailing blanks, tabs and newlines from the end of a
string, using a break to exit from a loop when the rightmost non-blank, non-tab, non-newline
is found.
*/

#include <stdio.h>
#include <string.h>

/* trim: remove trailing blanks, tabs  and newlines */
int trim(char s[]) {
    int n;

    for (n = strlen(s)-1; n >= 0; n--)
        if (s[n] != ' ' && s[n] != '\n' && s[n] != '\t')
            break;
    s[n+1] = '\0';
    return n+1; /* return the length of trimmed string */
}

main() {
    char str[] = "hello world \t\t\n\n";
    printf("length before = %d\n", strlen(str));
    printf("length after trim = %d\n", trim(str));
}