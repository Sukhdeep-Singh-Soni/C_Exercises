/*
 The program will print a random number every time a new seed value is used
*/

#include <stdio.h>

unsigned long int next = 1;

/* rand: return pseudo-random integer between 0..32767 */
int rand(void) {
    next = next * 1103515245 + 12345;
    return (unsigned int) (next/65536) % 32768;
}

void seed(unsigned int seed) {
    next = seed;
}

main() {
    for (int i = 0; i < 100; i = i + 2) {
        seed(i);
        printf("%d\n", rand());
    }
}