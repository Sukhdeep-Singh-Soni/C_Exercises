/*
 * Program to find the lcm of two numbers
 * */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 15;
	int b = 25;

	printf("max of %d and %d is %d\n", a, b, ((a + b + abs(a - b)) / 2));
    printf("max of %d and %d is %d\n", a, b, ((a + b - abs(a - b)) / 2));
}

/*
To find the maximum and minimum of two numbers without using loops or conditions, you can utilize mathematical formulas involving subtraction and absolute values. 
Finding the Maximum:
The maximum of two numbers 'a' and 'b' can be found using the following formula: 
max(a, b) = (a + b + abs(a - b)) / 2 
Explanation:
a - b calculates the difference between the two numbers.
abs(a - b) gives the positive difference (magnitude) between 'a' and 'b'.
If a > b, then a - b is positive, and abs(a - b) is equal to a - b. The formula becomes (a + b + a - b) / 2 = 2a / 2 = a, which is the maximum.
If a < b, then a - b is negative, and abs(a - b) is equal to -(a - b) or b - a. The formula becomes (a + b + b - a) / 2 = 2b / 2 = b, which is the maximum. 
Finding the Minimum:
Similarly, the minimum of two numbers 'a' and 'b' can be found using the following formula: 
min(a, b) = (a + b - abs(a - b)) / 2
Explanation:
If a > b, then a - b is positive, and abs(a - b) is equal to a - b. The formula becomes (a + b - (a - b)) / 2 = (a + b - a + b) / 2 = 2b / 2 = b, which is the minimum.
If a < b, then a - b is negative, and abs(a - b) is equal to -(a - b) or b - a. The formula becomes (a + b - (b - a)) / 2 = (a + b - b + a) / 2 = 2a / 2 = a, which is the minimum.
*/
