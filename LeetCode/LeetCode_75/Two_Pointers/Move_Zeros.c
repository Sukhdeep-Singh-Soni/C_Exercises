/*
 *Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 

Follow up: Could you minimize the total number of operations done?
 * */

#include <stdio.h>

void moveZeroes(int* nums, int numsSize);

int main(void) {
    int nums[] = {0,0,0,0,1,0,2,0,3,0,12};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    
    moveZeroes(nums, numsSize);

    for (int i = 0; i < numsSize; i++)
        printf("%d, ", nums[i]);
    return 0;
}


void moveZeroes(int* nums, int numsSize) {

    int i, j;

#if 0	/* Using another array logic */	
    int arr[numsSize];
    for (i = 0; i < numsSize; i++)
	    arr[i] = 0;

    for (i = 0, j = 0; i < numsSize; i++) {
		if (nums[i] != 0)
			arr[j++] = nums[i];
    }

    for (int k = 0; k < numsSize; k++)
	    printf("%d ", arr[k]);
    printf("\n");
#endif

#if 1		/* using two pointer logic */
        int temp;
	for (i = 0, j = 0; i < numsSize; i++) {
		if (nums[i] != 0) {
			temp = nums[j];
			nums[j] = nums[i];
			nums[i] = temp;
			j++;
		}
	}
#endif

#if 0		/* Using brute force approach */
    int i, j, k;
    int cont_zeros_at_start = -1;
    int tmp_idx = 0;
    i = j = k = 0;

    i = 0;
    tmp_idx = i;
    while (nums[tmp_idx] == 0) {
	cont_zeros_at_start++;
	tmp_idx++;
    }

    for (i = 0; i < numsSize; i++) {
	    	//printf("i loop\n");
		if (nums[i] == 0) {
			//printf("zero found\n");
			k = i;
			for (j = k+1; j < numsSize; k++, j++) {
				nums[k] = nums[j];
			}
			nums[j-1] = 0;
			//printf("index = %d , value = %d", i, nums[i]);
		}
		if (cont_zeros_at_start != 0) {
			i--;
			cont_zeros_at_start--;
		}
    }
#endif
}


