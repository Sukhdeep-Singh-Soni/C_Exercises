/*
Write a program to check the repeating elements in C.
*/

#include <stdio.h>

void swap(int *a1, int *a2);
void bubble_sort(int *arr, int size);
void check_repeating_elements(int *arr, int size);

int main(void) {
    int arr[] = {12, 34, 56, 12, 89, 89, 90, 56, 45, 12, 34};
    int size = sizeof arr / sizeof arr[0];

    check_repeating_elements(arr, size);

    return 0;
}

void check_repeating_elements(int *arr, int size) {
    int i;
    
    //sort elements first
    bubble_sort(arr, size);
    //check for duplicate
    for (i = 0; i < size; i++) {
        int flag = 0;
        while (i < size - 1 && arr[i] == arr[i+1]) {
            flag = 1;
            i++;
        }
        if (flag) {
            printf("%d ", arr[i-1]);
            //flag = 0;
        }
    }
}

void bubble_sort(int *arr, int size) {
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr+j, arr+(j+1));
            }
        }
    }
}

void swap(int *a1, int *a2) {
    *a1 = *a1 + *a2;
    *a2 = *a1 - *a2;
    *a1 = *a1 - *a2;
}