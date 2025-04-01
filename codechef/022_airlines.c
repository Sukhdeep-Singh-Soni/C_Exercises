/* Airlines

An airline operates XX aircraft every day. Each aircraft can carry up to 100100 passengers.
One day, NN passengers would like to travel to the same destination. What is the minimum number of new planes that the airline must buy to carry all NN passengers?
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of a single line containing two space-separated integers XX and NN — the number of aircraft the airline owns and the number of passengers travelling, respectively.

Output Format

    For each test case, output the minimum number of planes the airline needs to purchase.

Constraints

    1≤T≤10001≤T≤1000
    1≤X≤1061≤X≤106
    1≤N≤1061≤N≤106

Sample 1:
Input
Output

3
4 600
3 523
8 245

2
3
0

Explanation:

Test case 11: The airline needs at least 66 planes to carry 600600 passengers. They already have 44, so they must purchase 22 more.

Test case 22: The airline needs at least 66 planes to carry 523523 passengers. They already have 33, so they must purchase 33 more.

Test case 33: The airline needs at least 33 planes to carry 245245 passengers. They already have 88, so there's no need to purchase any more.
 */

#include <stdio.h>

/* Algorithm :-
   1. divide the number of passengers by 100 and also save the remainder
      if there is any.
   2. if remainder is there then add 1 to the earlier divie / 100 number
   3. now compare the number with total number of planes available with
      airlines.
   4. if number is smaller then print 0 otherwise print the difference.*/

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int numPlanes, numPassengers;
        int num_planes_required, num_passengers_remained;
        int result = 0;
        scanf("%d%d",&numPlanes, &numPassengers);
        num_planes_required = numPassengers / 100;
        num_passengers_remained = numPassengers % 100;
        if(num_passengers_remained)
            num_planes_required++;
        if((num_planes_required - numPlanes) <= 0) {
            result = 0;
        } else {
            result = (num_planes_required - numPlanes);
        }
        printf("%d\n",result);
    }
}
//end
