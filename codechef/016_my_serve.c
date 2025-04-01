/* It is My Serve

Alice and Bob are playing a game of table tennis where irrespective of the point scored, every player makes 22 consecutive serves before the service changes. Alice makes the first serve of the match. Therefore the first 22 serves will be made by Alice, then the next 22 serves will be made by Bob and so on.

Let's consider the following example match for more clarity:

    Alice makes the 1st1st serve.
    Let us assume, Bob wins this point. (Score is 00 for Alice and 11 for Bob)
    Alice makes the 2nd2nd serve.
    Let us assume, Alice wins this point. (Score is 11 for Alice and 11 for Bob)
    Bob makes the 3rd3rd serve.
    Let us assume, Alice wins this point. (Score is 22 for Alice and 11 for Bob)
    Bob makes the 4th4th serve.
    Let us assume, Alice wins this point. (Score is 33 for Alice and 11 for Bob)
    Alice makes the 5th5th serve.
    And the game continues ……

After the score reaches PP and QQ for Alice and Bob respectively, both the players forgot whose serve it is. Help them determine whose service it is.
Input Format

    The first line contains a single integer TT — the number of test cases. Then the test cases follow.
    The first line of each test case contains two integers PP and QQ — the score of Alice and Bob respectively.

Output Format

For each test case, determine which player's (Alice or Bob) serve it is.

You may print each character of Alice and Bob in uppercase or lowercase (for example, Bob, BOB, boB will be considered identical).
Constraints

    1≤T≤2001≤T≤200
    0≤P,Q≤100≤P,Q≤10

Sample 1:
Input
Output

4
0 0
0 2
2 2
4 7

Alice
Bob
Alice
Bob

Explanation:

    Test Case 1: Since no points have been scored yet, this is the first serve of the match. Alice makes the 1st1st serve of the match.
    Test Case 2: Two points have been scored yet. Thus, it is the third serve of the match. Bob makes the 3rd3rd serve of the match.
    Test Case 3: Four points have been scored yet. Thus, it is the fifth serve of the match. Alice makes the 5th5th serve of the match.
    Test Case 4: Eleven points have been scored yet. Thus, it is the twelfth serve of the match. Bob makes the 12th12th serve of the match.

 */

#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int p, q;
        scanf("%d%d",&p,&q);
        int tempSum = p + q;
        int serveTurn = tempSum / 2;


        if((serveTurn % 2) == 0) {
            //after every even number its alice's turn
            printf("Alice\n");
        } else {
            //vice versa for bob
            printf("Bob\n");
        }
    }
    return 0;
}

//end
