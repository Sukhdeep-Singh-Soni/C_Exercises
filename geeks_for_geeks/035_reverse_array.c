/* Write a program to reverse an Array.*/

#include <stdio.h>

void reverse_arr(int*, int);

int main(void) {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof arr / sizeof arr[0];

    reverse_arr(arr, size);

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void reverse_arr(int *arr, int size) {
    int i, j;

    for (i = 0, j = size - 1; i < j; i++, j--) {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
    }
}