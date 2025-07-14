/*Write a Program to print the Maximum and Minimum elements in an array.*/

#include <stdio.h>

int main(void) {
    int arr[] = {10, 20, 2, 30, 40, 5, 50, 60, 100, 1};
    int size = sizeof arr / sizeof arr[0];
    int max, min;

    max = min = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf(" max = %d, min = %d\n", max, min);
    return 0;
}