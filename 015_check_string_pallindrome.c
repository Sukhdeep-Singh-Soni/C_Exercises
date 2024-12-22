/*
 * This program will check whether string is a pallindrome or not
 * */

#include <stdio.h>

void str_reverse(char *s);
void str_copy(char *to, char *from);
int str_compare(char *s1, char *s2);

int main(void) {
	char str[] = "ollo";
	char str1[10];
#if 0 //long approach
	str_copy(str1, str);
	//printf("str : %s , str1 : %s\n",str,str1);

	str_reverse(str);
	printf("str : %s , str1 : %s\n",str,str1);

	if(str_compare(str, str1)) {
		printf("yes pallindrome\n");
	} else {
		printf("Not a pellindrome\n");
	}
#else //short approach
	int i;
	for(i = 0; str[i] != '\0'; i++) {} //length

	int low = 0; //start index
	int high = i-1; //end index
	int flag = 0; //flag to check if a pallindrome

	while(low < high) {
		if(str[low++] != str[high--]) {
			printf("not a pallindrome\n");
			flag = 1;
			break;
		}
	}

	if(!flag) {
		printf("yes a pallindrome\n");
	}
#endif
	return 0;
} //end of main

void str_reverse(char *s) {
	int i;
	char temp;

	for(int i = 0; s[i] != '\0'; i++) {} //calculate string length
	
	for(int j = 0, k = i-1; j < k; j++, k--) {
		temp = s[j];
		s[j] = s[k];
		s[k] = temp; //swap
	}
}

void str_copy(char *to, char *from) {
	int i = 0;

	while((to[i] = from[i]) != '\0') {
		i++;
	} //copy
}

int str_compare(char *s1, char *s2) {
	int i;	   //keep count of string s2 length
	int k = 0; //keeps count of string compare

	for(i = 0; s2[i] != '\0'; i++) {
		if(s1[i] == s2[i]) {
			k++;
		}
	}

	if(k == i) {
		return 1;
	} else {
		return 0;
	}

	return 0;
}
//end
