/* Program to reverse a number */

#include <stdio.h>

int reverse_num_iterative(int n);
int reverse_num_recursive(int n, int ans);

int main(void) {
    int num1 = 1234;
    printf("%d number reverse, iterative method = %d\n", num1, reverse_num_iterative(num1));
    int num2 = 6578;
    printf("%d number reverse, recursive method = %d\n", num2, reverse_num_iterative(num2));
    return 0;
}

int reverse_num_iterative(int n) {
    int res = 0;
    while (n) {
        res = res * 10 + (n % 10);
        n /= 10;
    }
    return res;
}

int reverse_num_recursive(int n, int ans) {
    if (n == 0)
        return ans;
    
    ans = 10 * ans + (n % 10);
    return reverse_num_recursive(n / 10, ans);
}