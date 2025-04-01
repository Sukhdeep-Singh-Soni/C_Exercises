/* Chef Eren

Chef is a very big fan of Eren Yeager.

In the last season of Attack on Titan, there were NN episodes numbered from 11 to NN.
Each even indexed episode was AA minutes long and each odd indexed episode was BB minutes long.

Calculate the total duration (in minutes) of the last season.
Input Format

    The first line of input contains a single integer TT, the number of test cases.
    The first and only line of each test case contains three integers NN, A,A, and BB, the number of episodes and the durations of each even-indexed and odd-indexed episodes respectively in minutes.

Output Format

For each test case, print a single integer on a new line, the total duration of the last season in minutes.
Constraints

    1≤T≤1001≤T≤100
    1≤N≤601≤N≤60
    1≤A,B≤601≤A,B≤60

Sample 1:
Input
Output

3
1 2 2
2 3 4
4 20 30

2
7
100

Explanation:

Test case 11: There is only one episode, so there is 11 odd-indexed episode, and 00 even-indexed episode. The total duration of the season =0⋅A+1⋅B=0⋅2+1⋅2=2=0⋅A+1⋅B=0⋅2+1⋅2=2.

Test case 22: There are two episodes with indices {1,2}{1,2}. Thus, there is 11 odd-indexed episode ({1})({1}), and 11 even-indexed episode ({2})({2}). The total duration of the season =1⋅A+1⋅B=1⋅3+1⋅4=7=1⋅A+1⋅B=1⋅3+1⋅4=7.

Test case 33: There are four episodes with indices {1,2,3,4}{1,2,3,4}. Thus, there are 22 odd-indexed episodes ({1,3})({1,3}), and 22 even-indexed episodes ({2,4})({2,4}). The total duration of the season =2⋅A+2⋅B=2⋅20+2⋅30=100=2⋅A+2⋅B=2⋅20+2⋅30=100.
 */

#include <stdio.h>

/* Algorithm :-
   1. loop until the number of episodes
   2. calculate the number of even and odd episodes
   3. put them in formula x * A + y * B, where x=number of even episodes and
      y=number of odd episodes
   4. print the result. */
int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int evenEpTime, oddEpTime;
        int numEven, numOdd;
        int numEpisodes;
        numOdd = numEven = 0;
        scanf("%d%d%d",&numEpisodes, &evenEpTime, &oddEpTime);
        for(int epNum = 1; epNum <= numEpisodes; epNum++) {
            if(epNum % 2)
                numOdd++; //odd
             else
                numEven++; //even
        }
        printf("%d\n",numEven * evenEpTime + numOdd * oddEpTime);
    }
    return 0;
}
//end
