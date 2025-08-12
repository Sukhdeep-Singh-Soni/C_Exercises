/*
consider the function squeeze(s,c), which removes all occurrences
of the character c from the string s.
*/

#include <stdio.h>

/* squeeze: delete all c from s */
void squeeze(char s[], int c) {
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

main() {
    extern void squeeze(char s[], int c);
    char str[] = " all l will be removed from this string";
    printf("before : %s\n", str);
    squeeze(str, 'l');
    printf("after : %s\n", str);
}