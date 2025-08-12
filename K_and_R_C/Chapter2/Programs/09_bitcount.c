/*
the function bitcount counts the number of 1-bits in its integer argument.
*/

#include <stdio.h>

/* bitcount: count 1 bits in x */
int bitcount(unsigned x) {
    int bc;

    for (bc = 0; x != 0; x >>= 1)
        if (x & 0x01)
            ++bc;
    return bc;
}

main() {
    extern int bitcount(unsigned x);
    printf("%d\n", bitcount(0x0f));
    printf("%d\n", bitcount(0x0a));
    printf("%d\n", bitcount(0x16));
    printf("%d\n", bitcount(0x07));
    printf("%d\n", bitcount(-10));
}