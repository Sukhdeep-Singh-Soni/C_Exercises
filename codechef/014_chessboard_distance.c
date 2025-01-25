/* Chessboard Distance

The Chessboard Distance for any two points (X1,Y1)(X1​,Y1​) and (X2,Y2)(X2​,Y2​) on a Cartesian plane is defined as max(∣X1−X2∣,∣Y1−Y2∣)max(∣X1​−X2​∣,∣Y1​−Y2​∣).

You are given two points (X1,Y1)(X1​,Y1​) and (X2,Y2)(X2​,Y2​). Output their Chessboard Distance.

Note that, ∣P∣∣P∣ denotes the absolute value of integer PP. For example, ∣−4∣=4∣−4∣=4 and ∣7∣=7∣7∣=7.
Input Format

    First line will contain TT, the number of test cases. Then the test cases follow.
    Each test case consists of a single line of input containing 44 space separated integers - X1,Y1,X2,Y2X1​,Y1​,X2​,Y2​ - as defined in the problem statement.

Output Format

For each test case, output in a single line the chessboard distance between (X1,Y1)(X1​,Y1​) and (X2,Y2)(X2​,Y2​)
Constraints

    1≤T≤10001≤T≤1000
    1≤X1,Y1,X2,Y2≤1051≤X1​,Y1​,X2​,Y2​≤105

Subtasks

Subtask #1 (100 points): original constraints
Sample 1:
Input
Output

3
2 4 5 1
5 5 5 3
1 4 3 3

3
2
2

Explanation:

    In the first case, the distance between (2,4)(2,4) and (5,1)(5,1) is max(∣2−5∣,∣4−1∣)=max(∣−3∣,∣3∣)=3max(∣2−5∣,∣4−1∣)=max(∣−3∣,∣3∣)=3.

    In the second case, the distance between (5,5)(5,5) and (5,3)(5,3) is max(∣5−5∣,∣5−3∣)=max(∣0∣,∣2∣)=2max(∣5−5∣,∣5−3∣)=max(∣0∣,∣2∣)=2.

    In the third case, the distance between (1,4)(1,4) and (3,3)(3,3) is max(∣1−3∣,∣4−3∣)=max(∣−2∣,∣1∣)=2max(∣1−3∣,∣4−3∣)=max(∣−2∣,∣1∣)=2.

 */

#include <stdio.h>
int max(int x_d, int y_d);

#define ABS(x)  ((x) < 0)?(-(x)):(x)

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int x1, y1, x2, y2;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        printf("%d\n",max(ABS(x1-x2), ABS(y1-y2)));
    }
    return 0;
}

int max(int x_d, int y_d) {
    int ret = (x_d > y_d)? x_d : y_d;
    if(ret < 0) {
        ret = -ret;
    }
    return ret;
}

//end
