/*
The following function is a Shell sort for sorting an array of integers. The
basic idea of this sorting algorithm, which was invented in 1959 by D. L. Shell, is that in early
stages, far-apart elements are compared, rather than adjacent ones as in simpler interchange
sorts. This tends to eliminate large amounts of disorder quickly, so later stages have less work
to do. The interval between compared elements is gradually decreased to one, at which point
the sort effectively becomes an adjacent interchange method. 
*/

#include <stdio.h>

void shellsort(int v[], int n) {
    int i, j, gap;

    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i-gap; j >= 0 && v[j] > v[j+gap]; j -= gap) {
                int temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}

main() {
    int arr[5] = {50, 45, 30, 25, 10};

    shellsort(arr, 5);

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
}