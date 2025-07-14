/* Program to convert decimal to binary number */

#include <stdio.h>

void reverse_string(char *arr);
void dec_to_bin_convert(double n, int prec);

char arr[20] = {0};

int main(void) {
	double num = 6.986;

	printf("Number = %lf\n", num);

	dec_to_bin_convert(num, 8);

	printf("Binary Equivalent = %s\n", arr);

	return 0;
}

/* dec_to_bin: convert fractional decimal number to binary
 * param - float number to convert to
 * param - decimal precision
 * */
void dec_to_bin_convert(double num, int prec) {
	
	int i = 0;

	int numIntegral = (int)num;

	double numFractional = num - numIntegral;

	//binary of integral part
	while (numIntegral) {
		int rem = numIntegral % 2;
		arr[i++] = rem + '0';
		numIntegral /= 2;
	}

	reverse_string(arr);

	arr[i++] = '.';

	//binary of decimal part
	while (prec--) {
		numFractional *= 2;
		int fractIntegral = (int)numFractional;
		arr[i++] = fractIntegral + '0';
		numFractional -= fractIntegral;
	}

	arr[i] = '\0';
}

void reverse_string(char *arr) {
	int i, j;
	char temp;

	i = 0;
	while (arr[i] != '\0') //get string length
		i++;
	
	for (j = i - 1,i = 0; i < j; i++, j--) {
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

