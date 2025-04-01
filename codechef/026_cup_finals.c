/* Cup Finals

It is the World Cup Finals. Chef only finds a match interesting if the skill difference of the competing teams is less than or equal to DD.

Given that the skills of the teams competing in the final are XX and YY respectively, determine whether Chef will find the game interesting or not.
Input Format

    The first line of input will contain a single integer TT, denoting the number of testcases. The description of TT testcases follows.
    Each testcase consists of a single line of input containing three space-separated integers XX, YY, and DD — the skill levels of the teams and the maximum skill difference.

Output Format

For each testcase, output "YES" if Chef will find the game interesting, else output "NO" (without the quotes). The checker is case-insensitive, so "YeS" and "nO" etc. are also acceptable.
Constraints

    1≤T≤20001≤T≤2000
    1≤X,Y≤1001≤X,Y≤100
    0≤D≤1000≤D≤100

Sample 1:
Input
Output

3
5 3 4
5 3 1
5 5 0

YES
NO
YES

Explanation:

Test case 11: The skill difference between the teams is 22, which is less than the maximum allowed difference of 44.

Test case 22: The skill difference between the teams is 22, which is more than the maximum allowed difference of 11.
 */

#include <stdio.h>

#define INTERESTED      0
#define NOT_INTERESTED  1

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int aTeam, bTeam, maxAllowedDiff;
        char res = NOT_INTERESTED;
        scanf("%d%d%d",&aTeam,&bTeam,&maxAllowedDiff);
        if(aTeam > bTeam) {
            if((aTeam - bTeam) <= maxAllowedDiff)
                res = INTERESTED;
        } else {
            if((bTeam - aTeam) <= maxAllowedDiff)
                res = INTERESTED;
        }
        if(res == INTERESTED)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

//end
