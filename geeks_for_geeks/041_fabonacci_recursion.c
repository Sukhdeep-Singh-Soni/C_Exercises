/*
Write a Code to print the Fibonacci series using recursion.
*/

#include <stdio.h>

void fabonacci_recur(int a, int b, int len);

int main(void) {
    int a = 0, b = 1, len = 12;
    printf("%d,%d,",a,b);
    fabonacci_recur(a, b, len);
    return 0;
}

void fabonacci_recur(int a, int b, int len) {
    if (len < 3)
        return;
    int c = a + b;
    printf("%d,", c);
    fabonacci_recur(b, c, len - 1);
}