/* Program to reverse a string, using two pointer approach to achieve that */

#include <stdio.h>

#define FILENAME	((char*)"reverse_string.c")

void reverse_string(char* s);
void swap(char* a, char* b);

/* main: function to test and control the program */
int main(void) {
    char s[] = "This is string is going to be reversed fully!";
    printf("%s: String before reverse = %s\n", FILENAME, s);
    reverse_string(s);
    printf("%s: Reverse String = %s\n",FILENAME, s);
}

/* reverse_string: reverse a string */
void reverse_string(char* s) {
    int i,j;

    j = 0;
    while (s[j] != '\0') /* get end of s */
        j++;
    j = j - 1; /* get to the index of array i.e size of array - 1 */    
    for(i = 0; i < j; i++, j--)
        swap(s+i, s+j);
}

void swap(char* s, char *j) {
    char temp;
    temp = *s;
    *s = *j;
    *j = temp;
}

