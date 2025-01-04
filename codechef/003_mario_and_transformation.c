/*
 *Mario and Transformation

Mario transforms each time he eats a mushroom as follows:

    If he is currently small, he turns normal.
    If he is currently normal, he turns huge.
    If he is currently huge, he turns small.

Given that Mario was initially normal, find his size after eating XX mushrooms.
Input Format

    The first line of input will contain one integer TT, the number of test cases. Then the test cases follow.
    Each test case contains a single line of input, containing one integer XX.

Output Format

For each test case, output in a single line Mario's size after eating XX mushrooms.

Print:

    NORMALNORMAL, if his final size is normal.
    HUGEHUGE, if his final size is huge.
    SMALLSMALL, if his final size is small.

You may print each character of the answer in either uppercase or lowercase (for example, the strings HugeHuge, hUgEhUgE, hugehuge and HUGEHUGE will all be treated as identical).
Constraints

    1≤T≤1001≤T≤100
    1≤X≤1001≤X≤100
 * */

#include <stdio.h>

typedef enum {
    SMALL   =   0,
    NORMAL,
    HUGE
}mario_size_e;

int main() {
	// your code goes here
    int t;
    mario_size_e size;
    scanf("%d",&t);
    
    while(t--) {
        int x;
        scanf("%d",&x);
        size = (x + NORMAL) % 3;
        switch(size) {
        case 0:
            printf("SMALL\n");
            break;
        case 1:
            printf("NORMAL\n");
            break;
        case 2:
            printf("HUGE\n");
            break;
        default:
            printf("Unknowm size\n");
            break;
        }//end of switch
    }//end of while
    return 0;
}


