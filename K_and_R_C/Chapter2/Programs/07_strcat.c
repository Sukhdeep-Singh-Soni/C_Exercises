/*
consider the standard function strcat(s,t), which concatenates the
string t to the end of string s. strcat assumes that there is enough space in s to hold the
combination. As we have written it, strcat returns no value; the standard library version
returns a pointer to the resulting string.
*/

#include <stdio.h>

/* str_cat: concatinate t to end of s, s be must be big enough */
void str_cat(char s[], char t[]) {
    int i, j;

    i = j = 0;
    while (s[i] != '\0')    /* find end of s */
        i++;
    while ((s[i++] = t[j++]) != '\0')   /* copy t */
        ;
}

main() {
    char s[20] = "hello ";
    char t[] = "whole world";
    extern void str_cat(char s[], char t[]);

    printf("before: %s\n", s);
    str_cat(s,t);
    printf("after: %s\n", s);
}