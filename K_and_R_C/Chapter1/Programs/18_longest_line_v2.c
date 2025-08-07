/*
This program will take input and print the longest line from the input
while (there's another line)
    if (it's longer than the previous longest)
        (save it)
        (save its length)
print longest line

This program will use external variables instead of local vars and passing pointers to functions
*/

#include <stdio.h>
#define MAXLINE 1000    /* maximum input line length */

int max;    /* maximum line length */
char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* maximum saved line */

int get_line();
void copy();

main() {
    int len;    /* current line length */
    extern int max;
    extern char longest[];
    
    max = 0;
    while ((len = get_line()) > 0) /* length cannot be zero so > 0 is a valid check */
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0) /* there was a line */
        printf("%s\n", longest);
}

/* getline: read a line into s, return length */
int get_line() {
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* copy: copy 'from' to 'to', assuming 'to' is big enough */
void copy() {
    int i;
    extern char line[], longest[];
    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}

