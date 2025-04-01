/**/

#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main() {
	int nums[4] = {2, 7, 11, 15};
	int returnSize;
	int *ptr = twoSum(nums, 4, 9, &returnSize);
	printf("%d %d\n",*ptr, *(ptr+1));
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int high = numsSize - 1;
    int low;
    static int arr[2];
    int i, j;
    unsigned char found = 0;

    for(i = 0; i < numsSize; i++) {
        for(j = i + 1; j < numsSize; j++) {
	    if((nums[i] + nums[j]) == target) {
	        found = 1;
		printf("%d %d\n",i,j);
	        break;
	    }
	}
	if(found == 1)
             break;
    }

    if(found == 1) {
        arr[0] = i;
        arr[1] = j;
    } else {
        arr[0] = 999;
	arr[1] = 999;
    }
    return arr;
}
