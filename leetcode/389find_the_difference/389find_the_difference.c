/*
389. Find the Difference
Given two strings s and t which consist of only lowercase letters.
String t is generated by random shuffling string s
and then add one more letter at a random position.
Find the letter that was added in t.
Example:
Input:
s = "abcd"
t = "abcde"
Output:
e
Explanation:
'e' is the letter that was added.
Subscribe to see which companies asked this question
*/

#include<stdio.h>
#include<string.h>
#include<malloc.h>
char findTheDifference(char* s, char* t) {
	if (s == "") {
		puts(t);
		return t;
	}
	else {
		int len1 = strlen(s);
		int len2 = strlen(t);
		int length = len2;
		char *str = (char *)malloc(len2 + 1);
		for (int i = 0; i < len1; i++) {
			if (t[0] == s[i]) {
				for (int k = 0, j = 1; j < len2; k++, j++) {
					str[k] = t[j];
				}
				len2--;
				str[len2] = NULL;
				t = str;
				if (len2 == 1) {
					puts(str);
					return *str;
					break;
				}
			}
		}
	}
	return;
}
int main() {
	findTheDifference("abcd", "abcde");
	findTheDifference("", "y");
	findTheDifference("av", "aev");
}