/*
 The program uses continue keyword of C to skip negative numbers and only print positive numbers
*/

#include <stdio.h>

main() {
    int arr[10] = {12, 34, -9, 87, -23, 123, 78, -87, 45, -1};
    for (int i = 0; i < 10; i++) {
        if (arr[i] < 0)
            continue;
        printf("%d ", arr[i]);
    }
}