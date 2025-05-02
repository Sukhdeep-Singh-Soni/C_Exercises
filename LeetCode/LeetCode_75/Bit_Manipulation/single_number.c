/* Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
   You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:

Input: nums = [2,2,1]

Output: 1

Example 2:

Input: nums = [4,1,2,1,2]

Output: 4

Example 3:

Input: nums = [1]

Output: 1
*/

#include <stdio.h>

int singleNumber(int *nums, int numSize);

int main(void) {
	int nums[] = {4,1,2,1,2};
	int n = sizeof(nums) / sizeof(nums[0]);
	printf("%d\n", singleNumber(nums, n));
	return 0;
}


int singleNumber(int *nums, int numsSize) {
#if 0  // space complexity O(1) , Time complexity O(n*n)
 	int i, j;
	int count = 0;

	for (i = 0; i < numsSize; i++) {
		for (j = 0; j < numsSize; j++) {
			if (j == i)
				continue;
			if (!(nums[i] ^ nums[j])) {
				count++;
				break;
			}
		}
		if (count == 0)
			return nums[i];
		count = 0;
	}
    return -1;
#endif
    int result = 0;
    /*space complexity = O(1), Time Complexity O(n)*/
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];
    }
    return result;
}

//end
