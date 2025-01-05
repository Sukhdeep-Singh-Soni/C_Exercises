/*
 * prime number new mwthod, checking divisibility upto half of number
 * e.g n = 13, check divisibility from 2 to 13/2=6 as we can see 7*2=14 which is greater than 13 so not required to check
 * divisibility for numbers greater than n/2.It also decreases the amount of interations and increases efficiency.
 * */

#include <stdio.h>

int main(void) {
	int n = 17;
	int flag = 0;

	if(n == 0 || n == 1) {
		flag = 1;
	}

	for(int i = 2; i <= n / 2; i++) {
		if(n % i == 0) {
			flag = 1;
			break;
		}
	}

	if(flag == 0) {
		printf("number %d is prime\n",n);
	} else {
		printf("number %d is not prime\n",n);
	}

	return 0;
}
