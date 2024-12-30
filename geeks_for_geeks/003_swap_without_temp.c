/*
 *This program will swap 2 values without using any extra variable
 * */

#include <stdio.h>

void swap(int*, int*);

int main(void) {
	int a = 54; /*1st variable to swap*/
	int b = 61; /*2nd variable to swap*/

	printf("values before swap : a=%d, b=%d\n",a,b);

	swap(&a,&b);

	printf("values after swap : a=%d, b=%d\n",a,b);
}

/*swap: swap without using extra variable*/
void swap(int *pa, int *pb) {
	*pa = *pa + *pb;
	*pb = *pa - *pb;
	*pa = *pa - *pb;
}
