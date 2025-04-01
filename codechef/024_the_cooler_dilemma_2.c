/* The Cooler Dilemma 2

The summer is at its peak in Chefland. Chef is planning to purchase a water cooler to keep his room cool. He has two options available:

    Rent a cooler at the cost of XX coins per month.
    Purchase a cooler for YY coins.

Chef wonders what is the maximum number of months for which he can rent the cooler such that the cost of renting is strictly less than the cost of purchasing it.
Input Format

    The first line of input will contain an integer TT — the number of test cases. The description of TT test cases follows.
    The first and only line of each test case contains two integers XX and YY, as described in the problem statement.

Output Format

For each test case, output the maximum number of months for which he can rent the cooler such that the cost of renting is strictly less than the cost of purchasing it.

If Chef should not rent a cooler at all, output 00.
Constraints

    1≤T≤10001≤T≤1000
    1≤X,Y≤1091≤X,Y≤109

Sample 1:
Input
Output

2
5 12
5 5

2
0

Explanation:

Test case 11: Cost of renting the cooler =5=5 coins per month. Cost of purchasing the cooler =12=12 coins. So, Chef can rent the cooler for 22 months at the cost of 1010 coins, which is strictly less than 1212 coins.

Test case 22: Cost of renting the cooler =5=5 coins per month. Cost of purchasing the cooler =5=5 coins. If Chef rents the cooler for 11 month, it will cost 55 coins, which is not strictly less than the cost of purchasing it. So, Chef should not rent the cooler.
 */

#include <stdio.h>

/* Algorithm :-
   1. total cost % cost per month */

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int total_cost, cost_per_month;
        scanf("%d%d",&cost_per_month, &total_cost);
        if(total_cost % cost_per_month != 0)
            printf("%d\n", total_cost / cost_per_month);
        else
            printf("%d\n", (total_cost / cost_per_month) - 1);
    }
}

//end
