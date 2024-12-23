/*
 * Two pointers is really an easy and effective technique which is typically used for searching pairs in a sorted array.
Given a sorted array A (sorted in ascending order), having N integers, find if there exists any pair of elements (A[i], A[j]) such that their sum is equal to X.
 * */

#include <stdio.h>

int is_pair_exist(int *arr, int len, int x);

int main(void) {
	int arr[] = {10, 20, 30, 40, 50, 60, 70}; //sorted array

	int len = sizeof(arr) / sizeof(arr[0]);

	int x = 10;

	if(is_pair_exist(arr, len, x)) {
		printf("yes pair exist\n");
	} else {
		printf("no pair doesn't exits\n");	
	}
	return 0;
}

int is_pair_exist(int *arr, int len, int x) {

#if 0 //NATIVE_MATHOD
	for(int i = 0; i < len; i++) {
		for(int j = 0; j < len; j++) {
			if(i == j) {
				continue; //don't consider same element twice
			}

			if((arr[i] + arr[j]) == x) {
				return 1; //pair exist
			}

			if((arr[i] + arr[j]) > x) {
				break; //if sum becomes greater then no need to go through other iterations
			}
		}
	}
	return 0;
#else //TWO_POINT_TECHNIQUE
	int i = 0;
	int j = len - 1;

	while(i < j) {

		//if we find a pair
		if((arr[i] + arr[j]) == x) {
			return 1;
		}

		//if sum is greater than element at current
		//pointers are more , we move towards
		//higher values by doing j-- 
		else if((arr[i] + arr[j]) > x) {
			j--;
		}

		//if sum is greater than element at current
		//pointers are less, we move towards
		//lower values by doing i++
		else {
			i++;
		}
	}
	return 0;
#endif
}
