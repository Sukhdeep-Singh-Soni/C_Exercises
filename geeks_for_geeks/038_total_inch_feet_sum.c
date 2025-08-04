/*
Write a C Program to add Two Distance Given as Input in Feet and Inches
*/

#include <stdio.h>

struct findsum {
    int feet;
    float inch;
};

void find_sum(struct findsum *arr, int size);


int main(void) {
    struct findsum arr[]  = { { 11, 5.1 }, { 13, 4.5 }, { 6, 8.1 } };

    int N = sizeof(arr) / sizeof(arr[0]);

    find_sum(arr, N);

    return 0;
}

void find_sum(struct findsum *arr, int size) {

    int feet_sum = 0;
    float inch_sum = 0.0;

    for (int i = 0; i < size; i++) {
        feet_sum += arr[i].feet;
        inch_sum += arr[i].inch;
    }

    if (inch_sum >= 12) {
        //get integral part of inch_sum
        int int_inch = (int)inch_sum;
        //remove the integral part and get the decimal part
        inch_sum = inch_sum - int_inch;
        
        inch_sum += int_inch % 12;

        feet_sum += int_inch / 12;
    }

    printf("feet sum = %d\n", feet_sum);
    printf("inch sum = %.2f\n", inch_sum);
}

