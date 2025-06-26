
#include <stdio.h>

#if 0
/*Native Approach - The idea is to sort the array in non-decreasing order. Now, we know that the largest element will be at index n - 1. So, starting from index (n - 2), traverse the remaining array in reverse order. As soon as we encounter an element which is not equal to the largest element, return it as the second largest element in the array. If all the elements are equal to the largest element, return -1.*/

int getSecondLargest(int *arr, int size) {
	
	//sort array in increasing order
	for (int i = 0; i < size; i++) {
		for(int j = i+1; j < size; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	//start from second last element as last element is the largest
	for (int i = size - 2; i >= 0; i--) {
		//return first element which is not equal to largest element
		if (arr[i] != arr[size - 1])
			return arr[i];
	}
	
	//if no second largest element was found return -1
	return -1;
}
#endif

#if 0
/* Better Approach - Two Pass Approach - The approach is to traverse the array twice. In the first traversal, find the maximum element. In the second traversal, find the maximum element ignoring the one we found in the first traversal.*/

int getSecondLargest(int *arr, int size) {
	int largest = -1;
	int secondLargest = -1;

	//find out max first
	for (int i = 0; i < size; i++)
		if (arr[i] > largest)
			largest = arr[i];

	//find out second max ignoring max
	for (int i = 0; i < size; i++)
		//update the second largest element if the current element is greater that the second largest and not equal to the largest
		if (arr[i] > secondLargest && arr[i] != largest)
			secondLargest = arr[i];
	
	return secondLargest;
}
#endif

#if 1
/*Expected Approach] One Pass Search
The idea is to keep track of the largest and second largest element while traversing the array. Initialize largest and secondLargest with -1. Now, for any index i,
If arr[i] > largest, update secondLargest with largest and largest with arr[i].
Else If arr[i] < largest and arr[i] > secondLargest, update secondLargest with arr[i]. */

int getSecondLargest(int *arr, int size) {
	int largest = -1;
	int secondLargest = -1;

	for (int i = 0; i < size; i++) {
		if (arr[i] > largest) {
			secondLargest = largest;
			largest = arr[i];
		}

		else if (arr[i] < largest && arr[i] > secondLargest)
			secondLargest = arr[i];
	}

	return secondLargest;
}
#endif

/* main: control function */
int main(void) {
	int arr[] = {12,35,1,10,34,1};
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("%d\n", getSecondLargest(arr,n));

	return 0;
}
