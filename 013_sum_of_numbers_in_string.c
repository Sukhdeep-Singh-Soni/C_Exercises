/*
 * program to calculate the sum of numbers in a string
 * */

#include <stdio.h>

int main(void) {
	char str[] = "123456789";
	int sum = 0;

	for(int i = 0; str[i] != '\0'; i++) {
		int ele = str[i] - '0'; //int ele = str[i] - 0x30(ASCII for 0)
		if(ele <= 9) {
			sum += ele;
		}	
	}

	printf("sum = %d\n",sum);
	return 0;
}
