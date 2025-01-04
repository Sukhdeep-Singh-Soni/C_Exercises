/*
 * This program will reverse the string's words not the whole string
 * e.g. -> string - "This is a string"
 * 	   output - "string a is This"
 * */

#include <stdio.h>

//identifies the state of a word whether in a word or outside a word
#define IN	0
#define OUT	1

void reverse(char *s);
void swap(char *s1, char*s2);

int main(void) {
	char str[] = "This is a string word reverse program";
	int i = 0;
	int word_start, word_end;

	//1. reverse the whole string first
	reverse(str);

	//detect the words and reverse them
	while(str[i] != '\0') {
		
		//handle multiple spaces in between and leading spaces
		while(str[i] == ' ')
			i++;

		//catch the index of starting of word
		word_start = i;

		//traverse till the end of the word
		while(str[i] != ' ' && str[i] != '\0') {
			i++;
		}
		
		//catch the word end index
		word_end = i - 1;

		//reverse the sub-string
		while(word_end > word_start) {
			swap((str + word_start),(str + word_end));
			word_end--;
			word_start++;
		}
	}

	printf("%s\n",str);

	return 0;
}

//reverse whole string
void reverse(char *s) {
	int len = 0;
	int i = 0;
	int j;

	//calculate string length
	while(s[i] != '\0')
		i++;

	len = i;

	for(i = 0, j = len-1; i < j; i++, j--) {
		swap(&s[i],&s[j]);
	}
}

//swap without using third variable
void swap(char *s1, char*s2) {
	*s1 = *s1 ^ *s2;
	*s2 = *s1 ^ *s2;
	*s1 = *s1 ^ *s2;
}
