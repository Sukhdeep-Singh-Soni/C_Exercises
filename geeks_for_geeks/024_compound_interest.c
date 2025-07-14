
#include <stdio.h>
#include <math.h>

int main(void) {
    double principal = 2300; //principal amount
    double rate = 7;         // annual rate of interest
    double time = 4;           //time

    //calculating compound interest
    double amount = principal * ((pow(1 + rate / 100, time)));
    double ci = amount - principal;

    printf("coumpound interest is %lf for principal %lf and total amount %lf\n", ci, principal, amount);
}