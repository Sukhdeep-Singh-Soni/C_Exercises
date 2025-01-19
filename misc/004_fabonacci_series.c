/*
 * Program to implement fabonacci series upto n numbers
 * */

#include <stdio.h>

int main(void) {
	int n = 10;
	int a = 0, b = 1; //first and second term
	int c = a + b; //third term
	printf("%d %d ",a,b);
	for(int i = 3; i <= n; i++) {
		printf("%d ",c);
		a = b;
		b = c;
		c = a + b;
	}
	printf("\n");
	return 0;
}

//end
