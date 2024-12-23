/*
 * Program to reverse a hexadecimal number
 * */

#include <stdio.h>
#include <stdint.h>

int get_bytecount(uint32_t hexnum);
uint32_t get_hexreverse(uint32_t hexnum, int bytecount);

int main(void) {
	uint16_t hex1 = 0x1234;
	uint32_t hex2 = 0x12345678;

	int byte_count1 = get_bytecount(hex1);
	int byte_count2 = get_bytecount(hex2);

	uint16_t reverse1 = (uint16_t)get_hexreverse(hex1, byte_count1);
	uint32_t reverse2 = get_hexreverse(hex2, byte_count2);

	printf("reversed hex1 : %#x, hex2 : %#x\n",reverse1, reverse2);
	return 0;
}

int get_bytecount(uint32_t hexnum) {
	int count = 0;

	while(hexnum) {
		hexnum >>= 8;
		count++;
	}

	//printf("byte count : %d\n",count);
	return count;
}

uint32_t get_hexreverse(uint32_t hexnum, int bytecount) {
	uint32_t reverse = 0;

	for(uint32_t i = 0; i < bytecount; i++) {
		unsigned int byte = (hexnum >> (i * 8)) & 0xff;
		reverse |= (byte << (bytecount-i-1)*8);
	}
	//printf("reversed value : %#x\n",reverse);
	return reverse;
}

//end
