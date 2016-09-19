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
#include<Windows.h>
#include<math.h>
#define MAXSIZE 2222

//����һ���������ַ�������
//int main() {
//	int pnumber, sum;
//	scanf("%d", &sum);
//	for (int m = 0; m < sum; m++) {
//		char str1[MAXSIZE];
//		gets(str1);
//		if (str1[0] == '-') {//�����ж��ǲ��Ǹ���/�Ǹ���
//			int temp1 = 0;
//			for (int i = 1, j = strlen(str1) - 1; i < (((strlen(str1)) / 2) + 1); j--, i++) {
//				//����Ǹ������ӵ�һ�������һ����ʼ�Ƚ��Ƿ���ͬ
//				if (str1[i] == str1[j]) {
//					temp1++;
//				}
//			}
//			if (temp1 == strlen(str1)/2) {
//				printf("true\n");
//			}
//			else printf("false\n");
//		}
//		else {//���Ǹ���
//			int temp2 = 0;
//			for (int a = 0, b = strlen(str1) - 1; a < (strlen(str1) / 2); b--, a++) {
//				if (str1[a] == str1[b]) {
//					temp2++;
//				}
//			}
//			if (temp2 == strlen(str1)/2) {
//				printf("true\n");
//			}
//			else printf("false\n");
//		}
//	}
//
//	return 0;
//}

//����������������
int isPalindrome(int a) {
	long  n = 0, temp;

	while (a != 0) {
		n += a % 10;
		a /= 10;
		n *= 10;
	}

	if (temp == n / 10 )
		printf("true\n");
	else 
		printf("false\n");
	return 0;
}
int main(){
	long x;
	isPalindrome(0);
	isPalindrome(121);
	isPalindrome(-121);
	isPalindrome(1234567887654321);
	isPalindrome(123321);

	return 0;
}