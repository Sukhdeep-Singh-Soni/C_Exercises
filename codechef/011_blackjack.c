/*
 * Blackjack

Chef is playing a variant of Blackjack, where 33 numbers are drawn and each number lies between 11 and 1010 (with both 11 and 1010 inclusive). Chef wins the game when the sum of these 33 numbers is exactly 2121.

Given the first two numbers AA and BB, that have been drawn by Chef, what should be 33-rd number that should be drawn by the Chef in order to win the game?

Note that it is possible that Chef cannot win the game, no matter what is the 33-rd number. In such cases, report −1−1 as the answer.
Input Format

    The first line will contain an integer TT - number of test cases. Then the test cases follow.
    The first and only line of each test case contains two integers AA and BB - the first and second number drawn by the Chef.

Output Format

For each testcase, output the 33-rd number that should be drawn by the Chef in order to win the game. Output −1−1 if it is not possible for the Chef to win the game.
Constraints

    1≤T≤1001≤T≤100
    1≤A,B≤101≤A,B≤10

Sample 1:
Input
Output

3
1 10
1 5
4 9

10
-1
8

Explanation:

Test case 11: The first two numbers are 11 and 1010. If the third number will be 1010, the resulting sum will be 1+10+10=211+10+10=21. So Chef will win the game if the third number is 1010.

Test case 22: The first two numbers are 11 and 55. There is no number between 11 and 1010, that can make the resulting sum 2121. Hence, the answer will be −1−1 in this test case.

 * */

#include <stdio.h>

#define WIN_NUM     21
#define ERROR_CODE  -1
int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int a,b;
        int res; /*to hold the output value*/
        scanf("%d%d",&a,&b);
        if((res = (WIN_NUM - (a + b))) <= 10) {
            printf("%d\n",res);
        } else {
            printf("%d\n",ERROR_CODE);
        }
    }
    return 0;
}

//end
