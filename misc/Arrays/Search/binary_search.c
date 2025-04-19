#include <stdio.h>

int binary_search(int ele, int *arr, int len);

int main(void) {
    int arr[] = {2, 10, 12, 24, 34, 56, 88, 102, 172, 203};
    int len = sizeof(arr) / sizeof(arr[0]);
    int ele_index;
    int element = 56;
    if ( (ele_index = binary_search(element, arr, len)) != (-1) )
        printf("element found at index %u\n", ele_index);
    else
        printf("element not found\n");
    return 0;
}

int binary_search(int element, int *arr, int len) {
    int low = 0;
    int high = len - 1;
    int mid = 0;
    while (low <= high) {
        mid = (low + high) / 2;
	if (arr[mid] > element)
	    high = mid - 1;
	else if (arr[mid] < element)
	    low = mid + 1;
	else
	    return mid;
    }
    return (-1);
}
