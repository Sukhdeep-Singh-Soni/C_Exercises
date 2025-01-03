/*
 *Small factorials

You are asked to calculate factorials of some small positive integers.

Input

An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1 <= n <= 100
Output

For each integer n given at input, display a line with the value of n!

Note: For larger numbers, their factorial can overflows any available numeric data type in C.


Problem Statement:

Given an integer n, calculate the factorial n! for a range of input numbers and print the result.
Approach:

    Challenges in the Problem: Handling Large Numbers-
        The value of n! grows extremely fast. For instance, 20! = 2,432,902,008,176,640,000. Standard data types such as int or long long cannot handle such large values since they exceed their maximum range.
    Storing and Printing Large Numbers: To handle the large size of factorial results-
        use an array to store individual digits of the factorial.
        Perform multiplication digit by digit, handling carries like manual multiplication and store the result in reverse order for easier manipulation.

Steps:

    Use an Array to Store Digits:

    To handle large results, use an array to store individual digits of the factorial. This avoids overflow issues with traditional data types.
    Each digit of the resulting number is stored in an array in reverse order (least significant digit first) to simplify multiplication.

    Perform Multiplication Digit-by-Digit:

    Use a manual multiplication approach, similar to how multiplication is done by hand:
        Multiply each digit in the array by the current number x in the iteration.
        Maintain a carry and add it to the next step to handle multi-digit results.
    After multiplication, update the array with the new number and continue until n is reached.

    Print the Result:

    After all iterations are complete, print the array starting from the highest index down to 0 to display the full factorial.

Complexity:

    Time Complexity: O(n2.m)O(n2.m), where m is the number of digits in the factorial. The approach is efficient for n up to 100 due to the manageable size of operations on individual digits.
    Space Complexity: O(m)O(m), where m is the number of digits in the result (maximum for 100! is 158 digits).

 * */

#include <stdio.h>

int main(void) {

	int t;

	scanf("%d",&t);

	while(t--) {
		int j,k,arr[200] = {0},temp[200] = {0},prod;
		j = 0;
		k = 0;
		prod = 0;
		
		int n;
		int carry = 0;

		scanf("%d",&n);

		int fact = n;

		while(n > 0) {
			arr[k++] = n % 10;
			n /= 10;
		}

		for(int i = fact-1; i > 0; i--) {

			while(k--) {
				prod = i * arr[j] + carry;
				temp[j++] = prod % 10;
				carry = prod / 10;
			}
			
			while(carry > 0) {
				temp[j++] = carry % 10;
				carry /= 10;
			}

			k = j;
			
			for(int m = 0; m < j; m++) {
				arr[m] = temp[m];
			}

			j = 0;
		} //end of for i = fact-1

		for(int l = k-1; l >= 0; l--) {
			printf("%d",arr[l]);
		}
		printf("\n");
	} //end of while t-- 
} //end of main
