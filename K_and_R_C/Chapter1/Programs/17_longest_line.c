/*
This program will take input and print the longest line from the input
while (there's another line)
    if (it's longer than the previous longest)
        (save it)
        (save its length)
print longest line
*/

#include <stdio.h>

#define MAXLINE 1000    /* maximum input line length */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

main() {
    int len;    /* current line length */
    int max;    /* maximum line length */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* maximum saved line */

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) /* length cannot be zero so > 0 is a valid check */
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) /* line exist*/
        printf("%s\n", longest);
}

/* getline: read a line into s, return length */
int get_line(char line[], int maxline) {
    int c, i;

    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* copy: copy 'from' to 'to', assuming 'to' is big enough */
void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

