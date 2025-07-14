/* program to check whether a number is pallindrome or not */

#include <stdio.h>
int reverse_num_recursive(int n, int ans);
int main(void) {
    int num = 12234;
    int ans = 0;
    int rev = reverse_num_recursive(num, ans);

    if (rev == num)
        printf("the number %d is a pallindrome\n", num);
    else
        printf("the number %d is not a pallindrome\n", num);
    return 0;
}

int reverse_num_recursive(int n, int ans) {
    if (n == 0)
        return ans;
    
    ans = 10 * ans + (n % 10);
    return reverse_num_recursive(n / 10, ans);
}