/* Speed Limit Test

Alice is driving from her home to her office which is AA kilometers away and will take her XX hours to reach.
Bob is driving from his home to his office which is BB kilometers away and will take him YY hours to reach.

Determine who is driving faster, else, if they are both driving at the same speed print EQUAL.
Input Format

    The first line will contain TT, the number of test cases. Then the test cases follow.
    Each test case consists of a single line of input, containing four integers A,X,B,A,X,B, and YY, the distances and and the times taken by Alice and Bob respectively.

Output Format

For each test case, if Alice is faster, print ALICE. Else if Bob is faster, print BOB. If both are equal, print EQUAL.

You may print each character of the string in uppercase or lowercase (for example, the strings equal, equAL, EquAl, and EQUAL will all be treated as identical).
Constraints

    1≤T≤10001≤T≤1000
    1≤A,X,B,Y≤10001≤A,X,B,Y≤1000

Sample 1:
Input
Output

3
20 6 20 5
10 3 20 6
9 1 1 1

Bob
Equal
Alice

Explanation:

Test case 11: Since Bob travels the distance between his office and house in 55 hours, whereas Alice travels the same distance of 2020 kms in 66 hours, BOB is faster.

Test case 22: Since Alice travels the distance of 1010 km between her office and house in 33 hours and Bob travels a distance of 2020 km in 66 hours, they have equal speeds.

Test case 33: Since Alice travels the distance of 99 km between her office and house in 11 hour and Bob travels only a distance of 11 km in the same time, ALICE is faster.
 */

#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int adist, atime, bdist, btime;
        scanf("%d%d%d%d",&adist, &atime, &bdist, &btime);
        float aspeed = ((float)adist / atime);
        float bspeed = ((float)bdist / btime);

        if(aspeed == bspeed)
            printf("Equal\n");
        else if(aspeed > bspeed)
            printf("Alice\n");
        else
            printf("Bob\n");
    }
    return 0;
}

//end
