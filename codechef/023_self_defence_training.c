/* Self Defence Training

After the phenomenal success of the 36th Chamber of Shaolin, San Te has decided to start 37th Chamber of Shaolin. The aim this time is to equip women with shaolin self-defence techniques.

The only condition for a woman to be eligible for the special training is that she must be between 1010 and 6060 years of age, inclusive of both 1010 and 6060.

Given the ages of NN women in his village, please help San Te find out how many of them are eligible for the special training.
Input Format

    The first line of input contains a single integer TT, denoting the number of test cases. The description of TT test cases follows.
    The first line of each test case contains a single integer NN, the number of women.
    The second line of each test case contains NN space-separated integers A1,A2,...,ANA1​,A2​,...,AN​, the ages of the women.

Output Format

For each test case, output in a single line the number of women eligible for self-defence training.
Constraints

    1≤T≤201≤T≤20
    1≤N≤1001≤N≤100
    1≤Ai≤1001≤Ai​≤100

Sample 1:
Input
Output

3
3
15 23 65
3
15 62 16
2
35 9

2
2
1

Explanation:

Test Case 11: Out of the women, only the 1st1st and 2nd2nd women are eligible for the training because their ages lie in the interval [10,60][10,60]. Hence the answer is 2.

Test Case 22: Only the 1st1st and 3rd3rd women are eligible for the training because their ages lie in the interval [10,60][10,60]. Hence the answer is again 2.

Test Case 33: Only the 1st1st woman with age 3535 is eligible for the training. Hence the answer is 11.
 */

#include <stdio.h>

/* Algorithm :-
   1. loop till number of women given and compare their ages with the
      limits provided and count the number of women eligible.*/

#define LOWER_AGE_LIMIT 10
#define UPPER_AGE_LIMIT 60

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int num_women;
        int num_eligible_women = 0;
        scanf("%d",&num_women);
        int women_age_arr[num_women];
        for(int i = 0; i < num_women; i++) {
            scanf("%d",&women_age_arr[i]);
            if(women_age_arr[i] >= LOWER_AGE_LIMIT && women_age_arr[i] <= UPPER_AGE_LIMIT)
                num_eligible_women++;
        }
        printf("%d\n",num_eligible_women);
    }
    return 0;
}

//end
