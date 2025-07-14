/* Write a Program to create a pyramid pattern using C */

#include <stdio.h>

#define N   5

void pyramid_pattern(void);

int main(void) {
    pyramid_pattern();
}

/*
     *
    ***
   *****

*/
void pyramid_pattern(void) {
    for (int i = 1; i <= N; i++) {          // i  = 0; i < 5
        for (int k = 1; k <= N - i; k++)    //k < n - i
            printf(" ");
        for (int j = 1; j < i*2; j++)       //j <= i * 2 +1
           printf("*");
        printf("\n");
    }
}