/*
 * This program convert binary number to decimal number
 * To compile this program link math library with the program as 'gcc <filename> -lm'
 * */

#include <stdio.h>
#include <math.h>

#define METHOD_1	0
#define METHOD_2	1
int main(void)
{
#if METHOD_1
	int bin_num = 0xff; /*binary number*/
	int dec_num = 0;    /*decimal number*/

	/*loop through every bit of the number*/
	for(int i = 0; i < (8 * sizeof(int)); i++)
	{
		/*check every bit if 1 or not*/
		if(bin_num & 0x01)
		{
			dec_num = dec_num + (1 * pow(2,i)); /*basic binary to decinal conversion formula*/			
		}

		/*shift number so that next bit will get tested*/
		bin_num >>= 1;
	}

	printf("converted value from binary to decimal : %d\n", dec_num);

	return 0;
#elif METHOD_2
	int N = 11011;

	//initializing base value to 1
	int a = 1;
	int ans = 0;

	while(N != 0) {
		ans = ans + (N % 10) * a;
		N = N / 10;
		a = a * 2;
	}

	printf("%d\n",ans);
	return 0;
#endif
}
