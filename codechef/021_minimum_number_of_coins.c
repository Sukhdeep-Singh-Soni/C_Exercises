/*  Minimum number of coins

Chef has infinite coins in denominations of rupees 55 and rupees 1010.

Find the minimum number of coins Chef needs, to pay exactly XX rupees. If it is impossible to pay XX rupees in denominations of rupees 55 and 1010 only, print −1−1.
Input Format

    First line will contain TT, number of test cases. Then the test cases follow.
    Each test case contains of a single integer XX.

Output Format

For each test case, print a single integer - the minimum number of coins Chef needs, to pay exactly XX rupees. If it is impossible to pay XX rupees in denominations of rupees 55 and 1010 only, print −1−1.
Constraints

    1≤T≤10001≤T≤1000
    1≤X≤10001≤X≤1000

Subtasks

    Subtask 1 (100 points): Original constraints.

Sample 1:
Input
Output

3
50
15
8

5
2
-1

Explanation:

Test Case 11: Chef would require at least 55 coins to pay 5050 rupees. All these coins would be of rupees 1010.

Test Case 22: Chef would require at least 22 coins to pay 1515 rupees. Out of these, 11 coin would be of rupees 1010 and 11 coin would be of rupees 55.

Test Case 33: Chef cannot pay exactly 88 rupees in denominations of rupees 55 and 1010 only.
*/

#include <stdio.h>

/* Algorithm :-
   1. divide number with 10 and save result in temporary variable.
   2. take number % 10 and if remainder is != 5 then -1 otherwise
      print number / 10 + 1
   3. if remainder is zero then print number / 10 only */

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int total_amount;
        int num_10_coins;
        int c_stat = 0;
        scanf("%d",&total_amount);
        num_10_coins = total_amount / 10;
        if(total_amount % 10) {
            //non zoro
            if((total_amount % 10) != 5) {
                c_stat = -1;
            } else {
                c_stat = num_10_coins + 1;
            }
        } else {
            //zero
            c_stat = num_10_coins;
        }
        printf("%d\n",c_stat);
    }
    return 0;
}

//end
