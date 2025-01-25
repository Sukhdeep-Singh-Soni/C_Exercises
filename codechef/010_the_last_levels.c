/*
 * The Last Levels

Chef is playing a videogame, and is getting close to the end. He decides to finish the rest of the game in a single session.

There are XX levels remaining in the game, and each level takes Chef YY minutes to complete. To protect against eye strain, Chef also decides that every time he completes 33 levels, he will take a ZZ minute break from playing. Note that there is no need to take this break if the game has been completed.

How much time (in minutes) will it take Chef to complete the game?
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    The first and only line of input will contain three space-separated integers XX, YY, and ZZ.

Output Format

For each test case, output on a new line the answer — the length of Chef's gaming session.
Constraints

    1≤T≤1001≤T≤100
    1≤X≤1001≤X≤100
    5≤Y≤1005≤Y≤100
    5≤Z≤155≤Z≤15

Sample 1:
Input
Output

4
2 12 10
3 12 10
7 20 8
24 45 15

24
36
156
1185

Explanation:

Test case 1: 2 12 10

    X = 2 (2 levels remain)
    Y = 12 (each level takes 12 minutes)
    Z = 10 (Chef would take a 10-minute break every 3 levels, but since there are only 2 levels, no break is needed)

Since there are only 2 levels, and no break is needed (because Chef takes a break only after every 3 levels).

The total time = X × Y = 2 × 12 = 24 minutes.

Test case 3: 7 20 8

    X = 7 (7 levels remain)
    Y = 20 (each level takes 20 minutes)
    Z = 8 (Chef takes an 8-minute break after every 3 levels)

Now, let's break this down:
Chef completes the first 3 levels: 3 x 20 = 60 minutes.
After completing these 3 levels, Chef takes an 8-minute break.
Chef completes another 3 levels: 3 x 20 = 60 minutes.
After completing these 3 levels, Chef takes another 8-minute break.
Now, Chef completes the remaining 1 level: 1 x 20 = 20 minutes.

So, the total time = 60 + 8 + 60 + 8 + 20 = 156 minutes.

 * */

#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int x, y, z;
        scanf("%d%d%d",&x,&y,&z);
        int break_time = (x % 3 == 0) ? ((x / 3) - 1) : (x / 3);
        printf("%d\n", (x * y) + (break_time * z));
    }
    return 0;
}

//end
