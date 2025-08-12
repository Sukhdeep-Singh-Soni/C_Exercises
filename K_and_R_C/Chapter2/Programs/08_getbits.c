/*
consider the function getbits(x,p,n) that
returns the (right adjusted) n-bit field of x that begins at position p. We assume that bit
position 0 is at the right end and that n and p are sensible positive values. For example,
getbits(x,4,3) returns the three bits in positions 4, 3 and 2, right-adjusted.
*/

#include <stdio.h>

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n) {
    return ((x >> (p+1-n)) & ~(~0 << n));
}

main() {
    int x = 0x0f;
    int p = 4;
    int n = 3;

    printf("%d\n", getbits(x,p,n));
    printf("%d\n", getbits(0xA,3,2));
}