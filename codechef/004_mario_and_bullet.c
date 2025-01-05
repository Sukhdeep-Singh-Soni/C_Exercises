/*
 * Mario and Bullet

Mario's bullet moves at XX pixels per frame. He wishes to shoot a goomba standing YY pixels away from him. The goomba does not move.

Find the minimum time (in seconds) after which Mario should shoot the bullet, such that it hits the goomba after at least ZZ seconds from now.
Input Format

    The first line of input will contain an integer TT, the number of test cases. Then the test cases follow.
    Each test case consists of a single line of input, containing three space-separated integers X,Y,X,Y, and ZZ.

Output Format

For each test case, output in a single line the minimum time (in seconds) after which Mario should shoot the bullet, such that it hits the goomba after at least ZZ seconds from now.
Constraints

    1≤T≤1001≤T≤100
    1≤X,Y,Z≤1001≤X,Y,Z≤100
    XX divides YY

Sample 1:
Input
Output

3
3 3 5
2 4 1
3 12 8

4
0
4

Explanation:

Test case 11: The speed of the bullet is 33 pixels per frame and the goomba is 33 pixels away from Mario. Thus, it would take 11 second for the bullet to reach the goomba. Mario wants the bullet to reach goomba after at least 55 seconds. So, he should fire the bullet after 44 seconds.

Test case 22: The speed of the bullet is 22 pixels per frame and the goomba is 44 pixels away from Mario. Thus, it would take 22 seconds for the bullet to reach the goomba. Mario wants the bullet to reach the goomba after at least 11 second. So, he should fire the bullet after 00 seconds. Note that, this is the minimum time after which he can shoot a bullet.

Test case 33: The speed of the bullet is 33 pixels per frame and the goomba is 1212 pixels away from Mario. Thus, it would take 44 seconds for the bullet to reach the goomba. Mario wants the bullet to reach goomba after at least 88 seconds. So, he should fire the bullet after 44 seconds.

 * */

#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--) {
        int x,y,z;
        int min_sec;
        scanf("%d %d %d",&x,&y,&z);
        if((y/x) >= z) {
            min_sec = 0;
        } else {
            min_sec = z-(y/x);
        }
        printf("%d\n",min_sec);
    }
    return 0;
}

//end
