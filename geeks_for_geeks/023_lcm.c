/*
 * Program to find the lcm of two numbers
 * */

#include <stdio.h>

int lcm(int a, int b);

int main(void) {
	int num1 = 15;
	int num2 = 25;

	printf("lcm of %d and %d is : %d\n",num1, num2, lcm(num1, num2));
}

int lcm(int a, int b) {
	int greater = (a > b) ? a : b;
	int smaller = (a < b) ? a : b;

	for(int i = greater; i <= greater * smaller; i += greater) {
		if(i % smaller == 0)
			return i;
	}
	return 0;
}

/*
recursive approach but need to understand it more

// C program to find
// LCM of two numbers
#include <stdio.h>

// minimum of two numbers
int Min(int Num1, int Num2)
{
    if (Num1 >= Num2)
        return Num2;
    else
        return Num1;
}

int LCM(int Num1, int Num2, int K)
{
    // If either of the two numbers
    // is 1, return their product
    if (Num1 == 1 || Num2 == 1)
        return Num1 * Num2;

    // If both the numbers are equal
    if (Num1 == Num2)
        return Num1;

    // If K is smaller than the
    // minimum of the two numbers
    if (K <= Min(Num1, Num2)) {

        // Checks if both numbers are
        // divisible by K or not
        if (Num1 % K == 0 && Num2 % K == 0) {

            // Recursively call LCM() function
            return K * LCM(Num1 / K, Num2 / K, 2);
        }

        // Otherwise
        else
            return LCM(Num1, Num2, K + 1);
    }

    // If K exceeds minimum
    else
        return Num1 * Num2;
}

int main()
{
    // Given N & M
    int N = 12, M = 9;

    // Function Call
    int ans = LCM(N, M, 2);

    printf("%d", ans);

    return 0;
}
*/