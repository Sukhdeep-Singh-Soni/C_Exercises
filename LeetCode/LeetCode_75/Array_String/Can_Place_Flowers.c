/*
You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted
in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

 

Example 1:

Input: flowerbed = [1,0,0,0,1], n = 1
Output: true
Example 2:

Input: flowerbed = [1,0,0,0,1], n = 2
Output: false
 

Constraints:

1 <= flowerbed.length <= 2 * 104
flowerbed[i] is 0 or 1.
There are no two adjacent flowers in flowerbed.
0 <= n <= flowerbed.length
*/

#include <stdio.h>
#include <stdbool.h>

#define B_TRUE	((char*)"true")
#define B_FALSE	((char*)"false")

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n);

int main(void) {
	int flowerbed[] = {0,0,1,0,0};
	int flowerbedSize = sizeof(flowerbed) / sizeof(flowerbed[0]);
	int n = 0;

	bool val = canPlaceFlowers(flowerbed, flowerbedSize, n);

	printf("%s\n", (val == 1)?B_TRUE:B_FALSE);

	return 0;
}

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
	int cnt = 0;
	int prev = 0;

	for (int i = 0; i < flowerbedSize; i++) {
        if (n == 0)
            break;
		if (flowerbed[i] == 0) {
			if (prev == 0 && ((i < flowerbedSize-1)?flowerbed[i+1]:flowerbed[i]) == 0) {
				flowerbed[i] = 1;
				cnt++;
			}
		}
		prev = flowerbed[i];
		if (cnt == n)
			break;
	}

	if (cnt != n)
		return false;
	
	return true;
}

