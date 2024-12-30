/*
 * The program to search element in an array
 * */

#include <stdio.h>

//search
int linearsearch(int *arr, int len, int ele);

int main(void) {
	int arr[] = {1, 34, 56, 78, 90, 3};

	int len = sizeof(arr) / sizeof(arr[0]);

	int index = 0;

	printf("arr : ");
	for(int i = 0; i < len; i++) {
		printf("%d, ",arr[i]);
	}
	printf("\n");

	if(index = linearsearch(arr,len,4)) {
		printf("found at index %d\n",index);
	} else {
		printf("not found\n");
	}
	return 0;
}

int linearsearch(int *arr, int len, int ele) {
	for(int i = 0; i < len; i++) {
		if(arr[i] == ele) {
			return i;
		}
	}
	return 0;
}
//end
