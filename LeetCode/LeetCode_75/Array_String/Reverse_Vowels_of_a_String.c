/*
 *Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "IceCreAm"

Output: "AceCreIm"

Explanation:

The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:

Input: s = "leetcode"

Output: "leotcede"

 

Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.
 * */

#include <stdio.h>

char* reverseVowels(char* s);

int main(void) {
     char s[] = "leetcode";
     char *sptr = reverseVowels(s);
     printf("%s\n", sptr);
     return 0;
}


char* reverseVowels(char* s) {
    int slen = 0;
    int left, right;
    char left_vowel = 0, right_vowel = 0;

    while (s[slen] != '\0') /* get length of s */
        slen++;

    for (left = 0, right = slen-1; left < right;) {
        switch(s[left]) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            left_vowel = 1;
            break;
        default:
            break;
        }

        switch(s[right]) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            right_vowel = 1;
            break;
        default:
            break;
        }

        if (left_vowel == 1 && right_vowel == 1) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left_vowel = 0;
            right_vowel = 0;
        }

        if (left_vowel != 1)
            left++;
        if (right_vowel != 1)
            right--;
    }
    return s;
}

