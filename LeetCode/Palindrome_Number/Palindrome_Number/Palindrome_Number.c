/*
LeetCode OJ
//������ַ��https://leetcode.com/problems/palindrome-number/
9. Palindrome Number
Question
Determine whether an integer is a palindrome. Do this without extra space.
click to show spoilers.
*/
#include<stdio.h>
#include<string.h>
#define MAXSIZE 2222

int main() {
	char str1[MAXSIZE];
	while (gets(str1)!=NULL) {
		if (str1[0] == '-') {//�����ж��ǲ��Ǹ���/�Ǹ���
			int temp1 = 0;
			for (int i = 1, j = strlen(str1) - 1; i < ((strlen(str1)) / 2) + 1; j--, i++) {
				//����Ǹ������ӵ�һ�������һ����ʼ�Ƚ��Ƿ���ͬ
				if (str1[i] == str1[j]) {
					temp1++;
				}
			}
			if (temp1 == strlen(str1)/2) {
				printf("true\n");
			}
			else printf("false\n");
		}
		else {//���Ǹ���
			int temp2 = 0;
			for (int a = 0, b = strlen(str1) - 1; a < strlen(str1) / 2; b--, a++) {
				if (str1[a] == str1[b]) {
					temp2++;
				}
			}
			if (temp2 == strlen(str1)/2) {
				printf("true\n");
			}
			else printf("false\n");
		}
	}

	return 0;
}