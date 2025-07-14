/*
For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t
(i.e., t is concatenated with itself one or more times).

Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

Example 1:

Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"
Example 2:

Input: str1 = "ABABAB", str2 = "ABAB"
Output: "AB"
Example 3:

Input: str1 = "LEET", str2 = "CODE"
Output: ""
 

Constraints:

1 <= str1.length, str2.length <= 1000
str1 and str2 consist of English uppercase letters.
*/
#include <stdio.h>
#include <stdlib.h>
char* gcdOfStrings(char* str1, char* str2);
int gcd_custom(int len1, int len2);

int main(void) {
    char str1[] = "ABABAB";
    char str2[] = "AB";
    
    char *res = gcdOfStrings(str1, str2);
    printf("%s\n",res);
    return 0;
}

/*
used the method of checking of two strings are factors of each other then only
it is possible to find the largest commom string
i.e concatinate str1 and str2 and also str2 and str1 and if they are not equal then
there doesn't exist a string common to both
after if they are equal then get the gcd of their lengths and that string with that length
is the largest common string between the two strings.
*/
char* gcdOfStrings(char* str1, char* str2) {
    int len1 = 0;
    int len2 = 0;
    int len3 = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    while (str1[len1] != '\0')
        len1++;
    while (str2[len2] != '\0')
        len2++;
        
    char gcd_arr[len1 + len2];
    char gcd_arr2[len1 + len2];
    
    for (int l = 0; l < len1; l++) {
        gcd_arr[k++] = str1[l];
    }
    for (int l = 0; l < len2; l++) {
        gcd_arr[k++] = str2[l];
    }
    gcd_arr[k] = '\0';
    len3 = k;
    
    k = 0;
    for (int l = 0; l < len2; l++) {
        gcd_arr2[k++] = str2[l];
    }
    for (int l = 0; l < len1; l++) {
        gcd_arr2[k++] = str1[l];
    }
    gcd_arr2[k] = '\0';
    
    for (int m = 0; m < len3; m++)
        if (gcd_arr[m] != gcd_arr2[m])
            return (char*)"";
    
    //find gcd of lengths of 2 strings
    int gcdlen = gcd_custom(len1, len2);
    
    str1[gcdlen] = '\0';
    return str1;
}

int gcd_custom(int len1, int len2) {
    if (len1 == len2)
        return len1;
    if (len1 > len2)
        return gcd_custom(len1 - len2, len2);
    else
        return gcd_custom(len1, len2 - len1);
}

//end
