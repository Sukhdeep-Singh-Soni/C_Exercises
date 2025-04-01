/* Primality Test

Alice and Bob are meeting after a long time. As usual they love to play some math games. This times Alice takes the call and decides the game. The game is very simple, Alice says out an integer and Bob has to say whether the number is prime or not. Bob as usual knows the logic but since Alice doesn't give Bob much time to think, so Bob decides to write a computer program.

Help Bob accomplish this task by writing a computer program which will calculate whether the number is prime or not.

Note that 1 is not a prime number.

Input

The first line of the input contains an integer T, the number of testcases. T lines follow.

Each of the next T lines contains an integer N which has to be tested for primality.
Output

For each test case output in a separate line, "yes" if the number is prime else "no."
Constraints

    1 ≤ T ≤ 20
    1 ≤ N ≤ 100000

Sample 1:
Input
Output

5
23
13
20
1000
99991

yes
yes
no
no
yes */

#include <stdio.h>

/* Algorithm :
   1. check if number is 0 or 1 if that then declare not a prime
   2. loop until half of number to check for prime as more than half
      of number * 2 will exceed number itself.
   3. flag if prime found and break loop and declare based on flag if
      prime or not */

#define PRIME       1
#define NOT_PRIME   0

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int num;
        int flag = PRIME;
        scanf("%d",&num);
        if(num == 0 || num == 1)
            flag = NOT_PRIME;
        for(int i = 2; i <= (num / 2); i++) {
            if((num % i) == 0) {
                flag = NOT_PRIME;
                break;
            }
        }
        if(flag == PRIME)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

//end
