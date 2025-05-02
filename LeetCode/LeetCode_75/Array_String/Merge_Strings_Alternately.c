/*
 * You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1.
 * If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

 

Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
Example 2:

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
Example 3:

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d
 

Constraints:

1 <= word1.length, word2.length <= 100
word1 and word2 consist of lowercase English letters.
 *
 * */

#include <stdio.h>
#include <stdlib.h>

char * mergeAlternately(char * word1, char * word2);

int main(void) {
    char word1[] = "abcd";
    char word2[] = "pq";

    printf("%s\n", mergeAlternately(word1, word2));
    return 0;
}

char * mergeAlternately(char * word1, char * word2){
    int i, j, k;
    char *merged_str = (char *)malloc(201 * sizeof(char)); /* 1 >= word1 len + word2 len <= 200*/
    i = j = k = 0;

    while (word1[i] != '\0' || word2[j] != '\0') {
        if (word1[i] != '\0') {
            merged_str[k++] = word1[i];
            i++;
        }
        if (word2[j] != '\0') {
            merged_str[k++] = word2[j];
            j++;
        }
    }
    merged_str[k] = '\0';
    return merged_str;
}

//end
