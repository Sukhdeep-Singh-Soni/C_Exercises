/* Fill Candies

Chef received NN candies on his birthday. He wants to put these candies in some bags. A bag has KK pockets and each pocket can hold at most MM candies. Find the minimum number of bags Chef needs so that he can put every candy into a bag.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of a single line containing three space-separated integers N,K,MN,K,M.

Output Format

For each test case, print the minimum number of bags Chef needs so that he can put all the candies in one of the bags.
Constraints

    1≤T≤10001≤T≤1000
    1≤N,K,M≤1001≤N,K,M≤100

Sample 1:
Input
Output

4
6 2 3
3 1 2
8 4 1
25 4 2

1
2
2
4

Explanation:

Test case 11: Chef puts 33 candies in the first pocket of a bag and the remaining 33 candies in the second pocket. Thus Chef will need only one bag.

Test case 22: Chef puts 22 candies in the only pocket of the first bag and the remaining 11 candy in the only pocket of the second bag. Thus Chef will need two bags.

Test case 33: Chef puts 44 candies in the first bag, one candy in each of the 44 pockets and the same for the second bag. Thus Chef will need two bags.

Test case 44: Chef puts 22 candies in each of the 44 pockets of three bags, one candy in a pocket of the fourth bag.
 */

#include <stdio.h>

int main() {
	// your code goes here
    int test_cases;
    scanf("%d",&test_cases);
    while(test_cases--) {
        int total_candles, num_bag_pockets, each_pocket_capacity;
        int temp;
        scanf("%d%d%d",&total_candles,&num_bag_pockets,&each_pocket_capacity);
        temp = total_candles % (num_bag_pockets * each_pocket_capacity);

        if(temp) {
            printf("%d\n",(total_candles / (num_bag_pockets * each_pocket_capacity) + 1));
        } else {
            printf("%d\n",(total_candles / (num_bag_pockets * each_pocket_capacity)));
        }
    }
    return 0;
}



//end
