/*Write a Program to find the area of a circle*/

#include <stdio.h>
#include <math.h>

#define PI  (3.142)

double find_area(int r) { return PI * pow(r, 2); }
#include <stdio.h>

int main(void) {
    
    printf("area is %f\n", find_area(5));
    return 0;
}