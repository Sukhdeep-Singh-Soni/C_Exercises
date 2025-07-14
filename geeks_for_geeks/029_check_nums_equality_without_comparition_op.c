/* program to check whether a number is pallindrome or not without using comparition operator */

#include <stdio.h>

int main(void) {
    int num1 = 12234;
    int num2 = 12236;

    if (!(num1 ^ num2))
        printf("numbers %d and %d are equal\n", num1, num2);
    else
        printf("numbers %d and %d are not equal\n", num1, num2);
    return 0;
}
