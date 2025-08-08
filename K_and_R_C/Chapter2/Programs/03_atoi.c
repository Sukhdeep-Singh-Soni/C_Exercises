/*
 The program will convert ascii to integer

 The string containing only digits will be accepted, otherwise when at first char the first digit encounters
 till the sequence of digits the conversion will happen to that part only
*/

#include <stdio.h>

/* atoi: convert s to integer */
int atoi(char *s) {
    int n, i;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

main() {
    char str[] = "12345 the numbers in this string will be converter to their integer value form ascii";
    char str1[] = "67543";
    printf("%d\n", atoi(str));
    printf("%d\n", atoi(str1));
}