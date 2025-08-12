/*
To illustrate a three-way decision, here is a binary search function that decides if a particular
value x occurs in the sorted array v. The elements of v must be in increasing order. The
function returns the position (a number between 0 and n-1) if x occurs in v, and -1 if not. 
52
Binary search first compares the input value x to the middle element of the array v. If x is less
than the middle value, searching focuses on the lower half of the table, otherwise on the upper
half. In either case, the next step is to compare x to the middle element of the selected half.
This process of dividing the range in two continues until the value is found or the range is
empty. 
*/
#include <stdio.h>

/* binsearch: find x in v[0] <= v[1] <= v[2] .. v[n-1] */
int binsearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low+high)/2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

main() {
    extern int binserach(int x, int v[], int n);
    int arr[] = {10, 12, 15, 18, 20, 23, 35, 79, 100, 167};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", binsearch(12, arr, n));
    printf("%d\n", binsearch(35, arr, n));
    printf("%d\n", binsearch(167, arr, n));
    printf("%d\n", binsearch(13, arr, n));
}