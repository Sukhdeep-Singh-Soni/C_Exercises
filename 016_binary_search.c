/*
 * This program will implement binary search algorithm
 * */

#include <stdio.h>

int binsearch(int *arr, int len, int element);
void sort(int *arr, int len);

int main(void) {
	int arr[] = {23, 45, 67, 12, 7, 78, 89, 9, 123, 43};
	int len = sizeof(arr) / sizeof(arr[0]);
	int index = 0;
	int ele = 123;

	sort(arr, len);
	printf("sorted array : ");
	for(int i = 0; i < len; i++)
		printf("%d ",arr[i]);
	printf("\n");
	if(index = binsearch(arr, len, ele)) {
		printf("found element %d at position %d\n", ele, index+1);
	} else {
		printf("element not found\n");
	}
}

int binsearch(int *arr, int len, int element) {
	int min = 0;
	int max = len-1;
	int mid;

	while(min <= max) {
		mid = (min + max) / 2;

		if(arr[mid] > element) {
			//go left side
			max = mid-1;
		} else if(arr[mid] < element) {
			//got to right side
			min = mid + 1;
		} else {
			return mid;
		}
	}

	return 0;
}

void sort(int *arr, int len) {
	int temp;

	for(int i = 0; i < len; i++) {
		for(int j = 0; j < len-1; j++) { //bubble sort
			if(arr[j] > arr[j + 1]) {
				temp = arr[j]; //swap
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
