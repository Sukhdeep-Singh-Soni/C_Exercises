/*
itoa, which converts a number to a
character string (the inverse of atoi)

The do-while is necessary, or at least convenient, since at least one character must be
installed in the array s, even if n is zero. We also used braces around the single statement that
makes up the body of the do-while, even though they are unnecessary, so the hasty reader
will not mistake the while part for the beginning of a while loop. 
*/

#include <stdio.h>

/* reverse: reverse string s in place */
void reverse(char s[]) {
    int c, i, j;

    /* get length of s */
    j = 0;
    while (s[j] != '\0')
        j++;
    
    for (i = 0, j = j-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

/* itoa: convert n to characters in s */
void itoa(char s[], int n) {
    int i, sign;

    if ((sign = n) < 0) /* record sign */
        n = -n;         /* make n positive */
    i = 0;
    do {                /* generate digits in reverse order */
        s[i++] = n % 10 + '0';  /* get next input */
    } while ((n /= 10) > 0);    /* delete it */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

main() {
    int n = 12368;
    char str[10];

    itoa(str, n);
    itoa(str, -5690);
    printf("%s\n", str);
}