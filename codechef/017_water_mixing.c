/* Water Mixing

Chef is setting up a perfect bath for himself. He has XX litres of hot water and YY litres of cold water.
The initial temperature of water in his bathtub is AA degrees. On mixing water, the temperature of the bathtub changes as following:

    The temperature rises by 11 degree on mixing 11 litre of hot water.
    The temperature drops by 11 degree on mixing 11 litre of cold water.

Determine whether he can set the temperature to BB degrees for a perfect bath.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of four space-separated integers A,B,X,A,B,X, and YY — the initial temperature of bathtub, the desired temperature of bathtub, the amount of hot water in litres, and the amount of cold water in litres respectively.

Output Format

For each test case, output on a new line, YES if Chef can get the desired temperature for his bath, and NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).
Constraints

    1≤T≤20001≤T≤2000
    20≤A,B≤4020≤A,B≤40
    0≤X,Y≤200≤X,Y≤20

Sample 1:
Input
Output

4
24 25 2 0
37 37 2 9
30 20 10 9
30 31 0 20

YES
YES
NO
NO

Explanation:

Test case 11: The initial temperature of water is 2424 and the desired temperature is 2525. Chef has 22 litres of hot water. He can add 11 litre hot water in the tub and change the temperature to 24+1=2524+1=25 degrees.

Test case 22: The initial temperature of water is 3737 and the desired temperature is also 3737. Thus, Chef does not need to add any more water in the bathtub.

Test case 33: The initial temperature of water is 3030 and the desired temperature is 2020. Chef needs to add 1010 litres of cold water to reach the desired temperature. Since he only has 99 litres of cold water, he cannot reach the desired temperature.

Test case 44: The initial temperature of water is 3030 and the desired temperature is 3131. Chef needs to add 11 litre of hot water to reach the desired temperature. Since he has no hot water, he cannot reach the desired temperature.
 */

#include <stdio.h>

/* Algorithm
   1. compare initial and desired temperature if equal then YES
   2. otherwise take difference between the temperatures, if difference is positive
      compare the diff with cold water value or if difference is negative
      compater the diff with hot water vaue.
   3. if the cold/hot water value is >= the diff(sufficient water available).
      otherwise NO
   */
#define RES_OK      0
#define RES_NOTOK   1
void waterCheck(int tempDiff, int waterQuantity, int *statusFlag);
int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int initial_temp;
        int target_temp;
        int h_water_L; /*hot water available in litres*/
        int c_water_L; /*cold water ---------"-------*/
        int statusFlag = RES_OK; /* indicate the status of result 0-OK, 1-NOT_OK*/
        scanf("%d%d%d%d",&initial_temp,&target_temp,&h_water_L,&c_water_L);
        int tempDiff = initial_temp - target_temp;
        if(tempDiff) { /* if non zero */
            if(tempDiff < 0) {
                //increase temp
                tempDiff = -tempDiff;
                waterCheck(tempDiff, h_water_L, &statusFlag);
            } else {
                //decrease temp
                waterCheck(tempDiff, c_water_L, &statusFlag);
            }
        }
        if(!statusFlag) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return RES_OK;
}

void waterCheck(int tempDiff, int waterQuantity, int *statusFlag) {
    static int i = 0;
    if(waterQuantity >= tempDiff) {
        *statusFlag = RES_OK;
    } else {
        *statusFlag = RES_NOTOK;
    }
}

