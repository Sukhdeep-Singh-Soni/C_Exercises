/*
 * Finding Square Roots

In olden days finding square roots seemed to be difficult but nowadays it can be easily done using in-built functions available across many languages .

Assume that you happen to hear the above words and you want to give a try in finding the square root of any given integer using in-built functions. So here's your chance.
Input

The first line of the input contains an integer T, the number of test cases. T lines follow. Each line contains an integer N whose square root needs to be computed.
Output

For each line of the input, output the square root of the input integer, rounded down to the nearest integer, in a new line.
Constraints

1<=T<=20
1<=N<=10000
Sample 1:
Input
Output

3
10
5
10000

3
2
100
 * */

#include <stdio.h>
#include <math.h>

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        printf("%d\n",(int)sqrt(n));
    }
    return 0;
}
/*Note: to compile it using gcc use the command gcc <filename> -lm, -lm should
 * be at last so that linker will already know that the program needs sqrt()*/
//end
