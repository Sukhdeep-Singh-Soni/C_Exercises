/*
 This program is a small part/section of Linux grep command
 A pattern matching program

 while (there's another line)
 if (the line contains the pattern)
 print it
*/

#include <stdio.h>
#define MAXLINE     1000    /* maximum input line length */

int get_line(char s[], int lim);
int str_index(char s[], char t[]);

char pattern[] = "ould";    /* pattern to search for */

main() {
    char line[MAXLINE];
    int found;

    found = 0;
    while (get_line(line, MAXLINE) > 0)
        if (str_index(line, pattern) >= 0) {
            printf("%s", line);
            found++;
        }
    return found;
}

/* get_line: get lines into s, return length */
int get_line(char s[], int lim) {
    int i, c;

    i = 0;
    while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

/* str_index: return index to t in s, -1 if none */
int str_index(char s[], char t[]) {
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j]==t[k]; k++, j++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}
