/* Decrement OR Increment

Write a program to obtain a number NN and increment its value by 1 if the number is divisible by 4 otherwiseotherwise decrement its value by 1.
Input Format

First line will contain a number NN.
Output Format

Output a single line, the new value of the number.
Constraints

    0≤N≤10000≤N≤1000

Sample 1:
Input
Output

5

4

Explanation:

Since 5 is not divisible by 4 hence, its value is decreased by 1.
 */

#include <stdio.h>

int main() {
	// your code goes here
    int n;

    scanf("%d",&n);

    if(n % 4)
        n--;
    else
        n++;
    printf("%d\n",n);
    return 0;
}

//end
