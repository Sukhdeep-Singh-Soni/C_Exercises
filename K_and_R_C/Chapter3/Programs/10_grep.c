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

}

/* get_line: get lines into s, return length */
int get_line(char s[], int lim) {
    int i, c;

    i = 0;
    while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
        s[i] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

/* str_index: return index to t in s, -1 if none */
int str_index(char s[], char t[]) {
    
}
