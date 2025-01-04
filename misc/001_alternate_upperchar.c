/*
 * This program converts every alternate character into its capital form if lower.
 * */

#include <stdio.h>

int main(void) {
	char str[] = "Hello This is a String alternate character program..";

	for(int i = 0; str[i] != '\0'; i++) {
		if(str[i] >= 'a' && str[i] <= 'z') {
			if((i % 2) != 0) {
				str[i] = str[i] - ('a' - 'A');
			}
		}
	}

	printf("%s\n",str);

	return 0;
}
