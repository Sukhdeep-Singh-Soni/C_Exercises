/*
 * This program is to find whether a number is prime or not
 * The logic is based on a prime divisibility check as (a number which divides 1 and itself perfectly are only prime numbers).
 * */

#include <stdio.h>

int main(void) {
	int num; /*number input from user to check for prime*/
	char pCount = 0; /*will keep the count of prime or not if divisibility count is 2 then prime*/
	
	printf("Enter number to check for prime : ");
	scanf("%d",&num);

	/*if number is less than or equal to 1, then it is not prime*/
	if(num <= 1) {	
		printf("No, %d is not prime\n", num);
	} else {

		/*check for divisors from 1 to n*/
		for(int i = 1; i <= num; i++) {
			if(num % i == 0)
				pCount++;
		}
#if 0
	if(pCount == 2) {
		printf("Yes, %d is prime!\n",num);
	} else {
		printf("No, %d is not prime\n", num);
	}
#else
	/*if n is divisible by more than 2 numbers, then it is not a prime*/
	if(pCount > 2)
		printf("No, %d is not prime\n",num);
	else
		printf("Yes, %d is prime\n",num);
	}
#endif

	return 0;
}
