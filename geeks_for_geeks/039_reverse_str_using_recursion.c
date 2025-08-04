/*
Write a Program in C to reverse a string using recursion.
*/

#include <stdio.h>

void rev_str_recur(char *s, int left, int right);
int get_len(char *s);
void swap(char *s, char *v);

int main(void) {
    char str[] = "This is a reverse string with recursion program";
    int left = 0;
    int right = get_len(str) - 1;
    printf("str before - %s\n", str);
    rev_str_recur(str, left, right);
    printf("str after reverse - %s\n", str);
}

void rev_str_recur(char *s, int left, int right) {
    if (left >= right)
        return;
    
    swap(s+left, s+right);
    rev_str_recur(s, left+1, right-1);
}

void swap(char *s, char *v) {
    char temp;

    temp = *s;
    *s = *v;
    *v = temp;
}

int get_len(char *s) {
    int i = 0;
    while (*s) {
        i++;
        s++;
    }
    return i;
}

/* another method
void reverse(char* str)
{
    if (*str) {
        reverse(str + 1);
        printf("%c", *str);
    }
}
*/