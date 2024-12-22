/*
 * Program will return the string length
 * */

#include <stdio.h>
#include <string.h>

int get_strlen(char *s);
int get_strlen_recursion(char *str, int i);

int main(void) {
	char str[] = "hello how are you 123";
	
	//length using strlen
	printf("length using strlen library function : %ld\n", strlen(str));
	
	//length using iteration
	printf("length using iteration : %d\n", get_strlen(str));

	//length using recursion
	printf("length using recursion : %d\n", get_strlen_recursion(str, 0));
	return 0;
}

int get_strlen(char *s) {
	int i; //will get length
	
	for(i = 0; s[i] != '\0'; i++) {}

	return i;
}

int get_strlen_recursion(char *str, int i) {
	if(str[i] == '\0')
		return 0;

	return get_strlen_recursion(str, i + 1) + 1;
}
