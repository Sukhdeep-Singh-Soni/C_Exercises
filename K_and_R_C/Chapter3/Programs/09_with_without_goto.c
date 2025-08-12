/*
 This program will have 2 function one with goto and other without goto usage
 where they find if 2 arrays a  and b have an element in common
*/

#include <stdio.h>

/* with goto usage */
void with_goto(int a[], int b[], int n, int m) {
    int i, j;

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (a[i] == b[j])
                goto found;
    printf("no element in common\n");

    found: printf("element found\n");  /* a label should be defined in the scope */
}

void without_goto(int a[], int b[], int n, int m) {
    int i, j;
    int found = 0;

    for (i = 0; i < n && !found ; i++)
        for (j = 0; j < m && !found; j++)
            if (a[i] == b[j])
                found = 1;
    if (found)
        printf("element found\n");
    else
        printf("no common element\n");
}
main() {
    int arr[5] = {34, 65, 78, 12, 67};
    int brr[3] = {102, 456, 56};
    with_goto(arr, brr, 5, 3);
    without_goto(arr, brr, 5, 3);
}