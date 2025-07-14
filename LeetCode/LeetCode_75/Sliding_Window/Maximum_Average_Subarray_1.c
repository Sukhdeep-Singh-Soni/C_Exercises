/*
 *You are given an integer array nums consisting of n elements, and an integer k.

Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

 

Example 1:

Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
Example 2:

Input: nums = [5], k = 1
Output: 5.00000
 

Constraints:

n == nums.length
1 <= k <= n <= 105
-104 <= nums[i] <= 104
 * */



#include <stdio.h>

int main(void) {
    
}

double findMaxAverage(int* nums, int numsSize, int k) {
    int start, end;
    
    start  = 0;
    end = k-1;
    double avg = 0.0;
    double max_avg = 0.0;
    while(end < numsSize) {
        for(int idx = start; idx <= end; idx++)
            avg += nums[idx];
        avg /= k;
        if (max_avg < avg)
            max_avg = avg;
    }
}
