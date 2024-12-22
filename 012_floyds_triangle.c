/* C Program to print Floyd's Triangle
 if number of rows is 4 then the 
 output is as follows

1
2 3
4 5 6
7 8 9 10

*/

#include <stdio.h>

int main(void) {
	int rows = 4;
	int temp = 1;

	for(int i = 1; i <= rows; i++) {
		for(int j = 1; j <= i; j++) {
			printf("%d ",temp++);
		}
		printf("\n");
	}
	return 0;
}
