/*
��Ŀ���Ž���ת����������ľŽ�������ת����16���������
���룺�����ÿո�����������ַ������ַ���ֻ��0-8���ֹ��ɣ����Ȳ�����10
�������ÿ�������ַ������һ��ʮ����������ÿ��һ�У�
�����ǰ׺0X��ʮ�������е�ABCDEFG�ô�д��ʽ��
�������£����������ύ��
#include <stdio.h>
int to_int(const char* a) {
    int p = 0;
    int i;
    for (i = 0; a[i]!=0; i++) {
        p = p * 9 + a[i];
    }
    return p;
}
int main() {
    char s[11];
    while (scanf("%s", s) != EOF) {
        printf("0X%X\n", to_int(s));
    }
    return 0;
����
�����ÿո�����������ַ������ַ���ֻ��0-8���ֹ��ɣ����Ȳ�����10
���
��ÿ�������ַ������һ��ʮ����������ÿ��һ�У������ǰ׺0X��
ʮ�������е�ABCDEFG�ô�д��ʽ��
��������
123
�������
0X66*/
#include <stdio.h>
int to_int(const char* a) {
	int p = 0;
	int i;
	for (i = 0; a[i] != 0; i++) {
		p = p * 9 + a[i];
	}
	return p;
}
int main() {
	char s[11];
	while (scanf("%i", s) != EOF) {
		printf("0X%x\n", to_int(s));
	}
	return 0;
}