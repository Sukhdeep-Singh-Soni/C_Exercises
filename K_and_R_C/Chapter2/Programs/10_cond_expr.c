/*
1. max of a and b using ternery operators
2. loop prints n
   elements of an array, 10 per line, with each column separated by one blank, and with each line
   (including the last) terminated by a newline.
3. printing 'item' or 'items'  based on the number of items
*/

#include <stdio.h>

main() {
    /* 1. max of a and b*/
    int a,b,z;
    a = 10;
    b = 30;
    z = (a > b)?a:b;
    printf("%d\n", z);

    /* 2. format elements with spaces and newlines */
    int arr[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
                   25, 26, 27, 28, 29, 30};
    int n = 30;
    for (int i = 0; i < n; i++) {
        printf("%d%c", arr[i], (i%10 == 9) || (i == n-1)?'\n':' ');
    }

    /* 3. print item/items according to number of items */
    n = 1;
    printf("You have %d item%s. \n", n, n == 1?"":"s");
    n = 12;
    printf("You have %d item%s. \n", n, n == 1?"":"s");
}