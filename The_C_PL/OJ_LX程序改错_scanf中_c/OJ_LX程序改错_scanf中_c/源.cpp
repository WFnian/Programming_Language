///*��Ŀ����
//��Ŀ����һ���ַ���һ���ַ������λ��
//���룺�������ݣ�ÿ��һ�У�����һ���ַ�c��һ���ַ���s��
//�ÿո�ָ����ַ�c����ĸ��ѡ���ַ���s���Ȳ�����10
//�������ÿ���������һ���������ַ���һ�γ������ַ������±꣬
//�����������-1��ÿ������һ��
//����������£����������ύ
//#include <stdio.h>
//int find_in_string(const char* s, char c) {
//    int i;
//    for (i = 0; s[i]; i++) {
//        if (s[i] == c)
//            return i;
//    }
//    return -1;
//}
//int main() {
//    char c, s[11];
//    while (scanf("%c%s", &c, s) != EOF) {
//        printf("%d\n", find_in_string(s, c));
//    }
//    return 0;
//����
//�������ݣ�ÿ��һ�У�����һ���ַ�c��һ���ַ���s���ÿո�ָ����ַ�c����ĸ��ѡ���ַ���s���Ȳ�����10
//���
//��ÿ���������һ���������ַ���һ�γ������ַ������±꣬�����������-1��ÿ������һ��
//��������
//a abcdefg
//�������
//0*/
//#include <stdio.h>
//#include<string.h>
//int find_in_string( char s[],char c) {
//	int i, j = 0, a;
//	a = strlen(s);
//	for (i = 0; s[i]!='\0'; i++) {
//		if (s[i] != c)
//			j++;
//	}
//	if (j == a) {
//		return -1;
//	}
//	else return j;
//}
//int main() {
//	char c, s[11];
//	while (1) {
//		scanf("%c%s", &c, s);
//		printf("%d\n", find_in_string(s, c));
//	}
//	return 0;
//}
#include<stdio.h>
#include<string.h>
int main() {
	char s[22], s1;
	int j=0;
	int i = 0;
	while (~scanf("%c", &s1)) {
		scanf("%s", s);
		for (; s[i] != '\0'; i++) {
			if (s[i] != s1) {
				j++;
			}
			else break;
		}
		if (j == strlen(s)) {
			printf("-1\n");
		}
		else printf("%d\n", i);
	}
}