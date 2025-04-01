/* Valentine is Coming

Valentine's Day is approaching and thus Chef wants to buy some chocolates for someone special.

Chef has a total of XX rupees and one chocolate costs YY rupees. What is the maximum number of chocolates Chef can buy?
Input Format

    First line will contain TT, the number of test cases. Then the test cases follow.
    Each test case contains a single line of input, two integers X,YX,Y - the amount Chef has and the cost of one chocolate respectively.

Output Format

For each test case, output the maximum number of chocolates Chef can buy.
Constraints

    1≤T≤10001≤T≤1000
    1≤X,Y≤1001≤X,Y≤100

Sample 1:
Input
Output

4
5 10
16 5
35 7
100 1

0
3
5
100

Explanation:

Test case-1: Chef has 55 rupees but the cost of one chocolate is 1010 rupees. Therefore Chef can not buy any chocolates.

Test case-2: Chef has 1616 rupees and the cost of one chocolate is 55 rupees. Therefore Chef can buy at max 33 chocolates since buying 44 chocolates would cost 2020 rupees.

Test case-3: Chef has 3535 rupees and the cost of one chocolate is 77 rupees. Therefore Chef can buy at max 55 chocolates for 3535 rupees.

Test case-4: Chef has 100100 rupees and the cost of one chocolate is 11 rupee. Therefore Chef can buy at max 100100 chocolates for 100100 rupees.
 */

#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int x,y;
        scanf("%d%d",&x,&y);
        printf("%d\n",(x / y));
    }
    return 0;
}


//end
