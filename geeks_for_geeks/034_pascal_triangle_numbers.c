/* Write a program to form Pascal Triangle using numbers ** */

#include <stdio.h>

#define ROW_LENGTH  5

void pascal_triangle_using_numbers(void);

int main(void) {
    pascal_triangle_using_numbers();
}

/*
        1   
      1   1   
    1   2   1   
  1   3   3   1   
1   4   6   4   1

*/
void pascal_triangle_using_numbers(void) {
    for (int i = 1; i <= ROW_LENGTH; i++) {
        //spaces
        for (int k = 1; k <= ROW_LENGTH - i; k++)
            printf(" ");
        //pascal logic
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}