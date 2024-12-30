/*
 * This program will replace all 0's with 1's in a number bitwise mode and normal mode
 * to compile this program use the command 'gcc 004_replace_0_with_1.c -lm' to link with math library
 * */

#include <stdio.h>
#include <math.h>

#define BITWISE_MODE	0x00
#define NORMAL_MODE	0x01

int main(void) {
#if BITWISE_MODE
	unsigned char number = 0x00; /*worst case all zeros*/
	unsigned char numbkp = number;

	printf("number before = %#x\n", number);
	
	for(int i = 0; i < 8; i++) {
		if(!(numbkp & 0x01)) {
			number |= (0x01 << i);
			numbkp >>= 1;	
		}
	}

	printf("number after = %#x\n", number);
#elif NORMAL_MODE
	int num = 102301;

	int ans; /*will accumulate the sum during the process*/
	int i = 0;  /*represents the power of the number like ones tens thousands*/

	while(num != 0) {
		if((num % 10) == 0) {
			/*digit is zero*/
			ans = ans + 1 * pow(10, i);
		} else {
			ans = ans + (num % 10) * pow(10, i);
		}

		num /= 10;
		i++;
	}

	printf("answer = %d\n",ans);
#endif
//end
}
