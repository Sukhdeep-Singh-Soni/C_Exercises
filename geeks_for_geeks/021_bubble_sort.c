/*
 * Program to implement bubble sort
 * */

#include <stdio.h>

void bubble_sort(int *arr, int len);
void swap(int *a1, int *a2);

int main(void) {
	int arr[] = {50, 40, 30, 20, 10, 9, 6, 4, 2, 1};

	int len = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, len);

	printf("arr : ");
	for(int i = 0; i < len; i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}

void bubble_sort(int *arr, int len) {
	int swapped = 0;

	for(int i = 0; i < len-1; i++) {
		swapped = 0;
		for(int j = 0; j < len - i - 1; j++) {
			if(arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
				swapped = 1;
			}
		}

		if(!swapped) {
			break;
		}
	}
}

void swap(int *a1, int *a2) {
	int temp;

	temp = *a1;
	*a1 = *a2;
	*a2 = temp;
}
