/* two sum problem : Find out the pair of elements where arr[p] + arr[q] 
 * add up to a certain number
 * */

#include <stdio.h>

int* two_sum(int *arr, int arrSize, int target);

int main(void) {
    int arr[] = {1, 3, 6, 8, 9, 13, 12, 34};
    int len = sizeof(arr) / sizeof(arr[0]);
    int *ret_ptr = two_sum(arr, len, 7);
    if (*ret_ptr != -1)
        printf("sum found ! with elements %d %d\n", arr[*ret_ptr], arr[*(ret_ptr+1)]);
    return 0;
}

int* two_sum(int *arr, int arrSize, int target) {
    int low = 0;
    int high = arrSize - 1;
    static int ret_arr[2];

    while (low < high) {
        if ((arr[low] + arr[high]) == target) {
	    ret_arr[0] = low;
	    ret_arr[1] = high;
	    return ret_arr;
	} else if ((arr[low] + arr[high]) < target)
	      low++;
	  else
	      high--;
    }
    ret_arr[0] = -1;
    return ret_arr;
}
