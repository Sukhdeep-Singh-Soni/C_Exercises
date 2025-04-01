/* Chef and his Apps

Chef's phone has a total storage of SS MB. Also, Chef has 22 apps already installed on his phone which occupy XX MB and YY MB respectively.

He wants to install another app on his phone whose memory requirement is ZZ MB. For this, he might have to delete the apps already installed on his phone. Determine the minimum number of apps he has to delete from his phone so that he has enough memory to install the third app.
Input Format

    The first line contains a single integer TT — the number of test cases. Then the test cases follow.
    The first and only line of each test case contains four integers S,X,YS,X,Y and ZZ — the total memory of Chef's phone, the memory occupied by the two already installed apps and the memory required by the third app.

Output Format

For each test case, output the minimum number of apps Chef has to delete from his phone so that he can install the third app.
Constraints

    1≤T≤10001≤T≤1000
    1≤S≤5001≤S≤500
    1≤X≤Y≤S1≤X≤Y≤S
    X+Y≤SX+Y≤S
    Z≤SZ≤S

Sample 1:
Input
Output

4
10 1 2 3
9 4 5 1
15 5 10 15
100 20 30 75

0
1
2
1

Explanation:

Test Case 1: The unused memory in the phone is 77 MB. Therefore Chef can install the 33 MB app without deleting any app.

Test Case 2: There is no unused memory in the phone. Chef has to first delete one of the apps from the phone and then only he can install the 11 MB app.

Test Case 3: There is no unused memory in the phone. Chef has to first delete both the apps from the phone and then only he can install the 1515 MB app.

Test Case 4: The unused memory in the phone is 5050 MB. Chef has to first delete the 3030 MB app from the phone and then only he can install the 7575 MB app.
 */

#include <stdio.h>

/* Algorithm
   1. take sum of installed apps size and compare it with total size.
   2. if above difference >= required app size then 0.
   3. Otherwise compare the greater of the two apps and add it to above sum
      of apps and then compare that sum again with required app size.
   4. increment count and exit if above result >= resuired app size.
   5. Otherwise increment count again
   6. And then print the result.*/

int numAppToDelete(int diff, int app_size, int newapp_size);
int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int total_size,app1_size,app2_size,newapp_size,sum,diff,count;
        count = 0;
        scanf("%d%d%d%d",&total_size,&app1_size,&app2_size,&newapp_size);
        sum = app1_size + app2_size;
        diff = total_size - sum;
        if(diff >= newapp_size) {
            count = 0;
        } else {
            if(app1_size >= app2_size) {
                count = numAppToDelete(diff,app1_size,newapp_size);
            } else {
                count = numAppToDelete(diff,app2_size,newapp_size);
            }
        }
        printf("%d\n",count);
    }
}

int numAppToDelete(int diff, int app_size, int newapp_size) {
    int count = 0;
    diff += app_size;
    if(diff >= newapp_size) {
        count++;
    } else {
        count += 2;
    }
    return count;
}

//end
