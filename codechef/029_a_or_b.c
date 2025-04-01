/* A or B

There are two problems in a contest.

    Problem A is worth 500500 points at the start of the contest.
    Problem B is worth 10001000 points at the start of the contest.

Once the contest starts, after each minute:

    Maximum points of Problem A reduce by 22 points .
    Maximum points of Problem B reduce by 44 points.

It is known that Chef requires XX minutes to solve Problem A correctly and YY minutes to solve Problem B correctly.

Find the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.
Input Format

    First line will contain TT, number of test cases. Then the test cases follow.
    Each test case contains of a single line of input, two integers XX and YY - the time required to solve problems AA and BB in minutes respectively.

Output Format

For each test case, output in a single line, the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.
Constraints

    1≤T≤10001≤T≤1000
    1≤X,Y≤1001≤X,Y≤100

Sample 1:
Input
Output

4
10 20
8 40
15 15
20 10

1360
1292
1380
1400

Explanation:

Test Case 11: If Chef attempts in the order A→BA→B then he submits Problem A after 1010 minutes and Problem B after 3030 minutes.
Thus, he gets 500−10⋅2=480500−10⋅2=480 points for problem A and 1000−30⋅4=8801000−30⋅4=880 points for problem B. Thus, total 480+880=1360480+880=1360 points for both the problems.

If Chef attempts in the order B→AB→A then he submits Problem B after 2020 minutes and Problem A after 3030 minutes.
Thus, he gets 1000−20⋅4=9201000−20⋅4=920 points for Problem B and 500−30⋅2=440500−30⋅2=440 points for Problem A. Thus total 920+440=1360920+440=1360 points for both the problems.

So, in both cases Chef gets 13601360 points in total.

Test Case 22: If Chef attempts in the order A→BA→B then he submits Problem A after 88 minutes and Problem B after 4848 minutes.
Thus, he gets 500−8⋅2=484500−8⋅2=484 points for problem A and 1000−48⋅4=8081000−48⋅4=808 points for problem B. Thus, total 484+808=1292484+808=1292 points for both the problems.

If Chef attempts in the order B→AB→A then he submits Problem B after 4040 minutes and Problem A after 4848 minutes.
Thus, he gets 1000−40⋅4=8401000−40⋅4=840 points for Problem B and 500−48⋅2=404500−48⋅2=404 points for Problem A. Thus total 840+404=1244840+404=1244 points for both the problems.

So, Chef will attempt in the order A→BA→B and thus obtain 12921292 points.

Test Case 33: If Chef attempts in the order A→BA→B then he submits Problem A after 1515 minutes and Problem B after 3030 minutes.
Thus, he gets 500−15⋅2=470500−15⋅2=470 points for problem A and 1000−30⋅4=8801000−30⋅4=880 points for problem B. Thus, total 470+880=1350470+880=1350 points for both the problems.

If Chef attempts in the order B→AB→A then he submits Problem B after 1515 minutes and Problem A after 3030 minutes.
Thus, he gets 1000−15⋅4=9401000−15⋅4=940 points for Problem B and 500−30⋅2=440500−30⋅2=440 points for Problem A. Thus total 940+440=1380940+440=1380 points for both the problems.

So, Chef will attempt in the order B→AB→A and thus obtain 13801380 points.

Test Case 44: If Chef attempts in the order A→BA→B then he submits Problem A after 2020 minutes and Problem B after 3030 minutes.
Thus, he gets 500−20⋅2=460500−20⋅2=460 points for problem A and 1000−30⋅4=8801000−30⋅4=880 points for problem B. Thus, total 460+880=1340460+880=1340 points for both the problems.

If Chef attempts in the order B→AB→A then he submits Problem B after 1010 minutes and Problem A after 3030 minutes.
Thus, he gets 1000−10⋅4=9601000−10⋅4=960 points for Problem B and 500−30⋅2=440500−30⋅2=440 points for Problem A. Thus total 960+440=1400960+440=1400 points for both the problems.

So, Chef will attempt in the order B→AB→A and thus obtain 14001400 points.
 */


#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int x, y;
        scanf("%d%d",&x,&y);
        int lastTime = x + y;
        int sum1 = (500 - (x * 2)) + (1000 - (lastTime * 4));
        int sum2 = (1000 - (y * 4)) + (500 - (lastTime * 2));
        if(sum1 >= sum2) {
            //A->B
            printf("%d\n",sum1);
        } else {
            //B->A
            printf("%d\n",sum2);
        }
    }
    return 0;
}

//end
