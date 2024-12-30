/*
 * This program does cyclic rotation of an array to k positions
 * */

#include <stdio.h>

int main(void) {
	int arr[] = {1, 2, 3, 4, 5};

	int len = sizeof(arr) / sizeof(arr[0]);

	int k = 5; //positions upto which cyclic rotation will happen

	int i = 2; //index

	while(k--) {
		printf("%d ",(arr[i++]));
		i = i % len;
	}
	
	printf("\n");

	return 0;
}
