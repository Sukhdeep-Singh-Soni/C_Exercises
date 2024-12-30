/*
 * This program converts miles into kilometers (1 mile = 1.60934)
 * */

#include <stdio.h>

#define CONV_FACTOR	(1.60934f)

int main(void) {
	float miles = 45.605f;

	printf("converted %f to %f\n",miles, miles * CONV_FACTOR);

	return 0;
}
