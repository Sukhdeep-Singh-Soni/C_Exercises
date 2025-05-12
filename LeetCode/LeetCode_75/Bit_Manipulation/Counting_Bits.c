/*
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

 

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10

Example 2:

Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101

 

Constraints:

    0 <= n <= 105

 

Follow up:

    It is very easy to come up with a solution with a runtime of O(n log n). Can you do it in linear time O(n) and possibly in a single pass?
    Can you do it without using any built-in function (i.e., like __builtin_popcount in C++)?
*/

#include <stdio.h>
#include <stdlib.h>

int* countBits(int n, int* returnSize);

int main(void) {
	int n = 5;
	int returnSize;
	int *res;

	res = countBits(n, &returnSize);
	for (int i = 0; i < returnSize; i++)
		printf("%d ", res[i]);
	printf("\n");

	return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int *ans = (int*)malloc((n+1) * sizeof(int));

    /* Initializing the array to zero */
    for(int idx = 0; idx < n+1; idx++)
        ans[idx] = 0;

#if 0 /* brute force method */
    int i, j;
    int count = 0;
    
    for (i = 1; i <= n; i++) {
        for (j = i; j != 0; j >>= 1)  {
            if (j & (unsigned int)0x01U)
                count++;
        }
        ans[i] = count;
        count = 0;
    }
#else /* optimized method */
    for (int i = 1; i <= n; i++)
        ans[i] = ans[i >> 1] + (i & 1);
#endif
    *returnSize = n+1; /* providing the control function the return size*/
    return ans;
}

/*
Approach:
To tackle this problem efficiently, we'll employ dynamic programming with a clever
observation. We can utilize the fact that the count of 1's in the binary representation
of an even number is the same as the count for half of that number. The count for an odd 
number is one more than the count for its preceding even number.

Time complexity: We iterate over each integer up to n, resulting in a time complexity 
of O(n).

Space complexity: We use an additional array of size n + 1 to store the counts, resulting 
in a space complexity of O(n).
*/

