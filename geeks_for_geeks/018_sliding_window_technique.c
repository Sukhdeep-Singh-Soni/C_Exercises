/*
 * Naïve Approach: So, let’s analyze the problem with Brute Force Approach. We start with the first index and sum till the kth element. We do it for all possible consecutive blocks or groups of k elements. This method requires a nested for loop, the outer for loop starts with the starting element of the block of k elements, and the inner or the nested loop will add up till the kth element.
 *##########################################################################################################################
 * Applying the sliding window technique: 

    We compute the sum of the first k elements out of n terms using a linear loop and store the sum in variable window_sum.
    Then we will traverse linearly over the array till it reaches the end and simultaneously keep track of the maximum sum.
    To get the current sum of a block of k elements just subtract the first element from the previous block and add the last element of the current block.
 * */

#include <stdio.h>

void sliding_window_native(int *arr, int len, int k);
void sliding_window_techinque(int *arr, int len, int k);

int main(void) {
	
}

void sliding_window_native(int *arr, int len, int k) {

}

void sliding_window_techinque(int *arr, int len, int k) {

}
