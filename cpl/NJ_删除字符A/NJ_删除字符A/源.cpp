/*
							ɾ���ַ�A
��������
   ���ַ��������������������ʵ�����¹��ܣ����ַ�����ɾ����ĳ��ָ���ַ���ͬ���ַ���
����
   ����������У� 
   ��һ�����ַ��������Ȳ�����20�� 
   �ڶ�����һ��ָ���ַ���
���
   ���ɾ������ַ�����
����ʾ��
   I am a student 
   a
���ʾ��
   I m  student
���ݷ�Χ
   ���������Ϊ�ַ��������ҳ��Ȳ�����20
*/
//#include<stdio.h>
//#include<string.h>
//int charc(char c[], char a);
//int main() {
//	char str[22];
//	char c, a[22];
//	int i;
//	scanf("%s%c", str, &c);
//	a[22]=charc(str, c);
//	puts(a);
//	return 0;
//}
//int charc(char c[],char a) {
//	int len;
//	char v[22], b[22];
//	len = strlen(c);
//	int i;
//	for (i = 0; i < len; i++) {
//		b[i] = c[i];
//		if (c[i] == a) 
//		break;
//		
//	}
//	return b[i];
//	//(b);
//}
#include<stdio.h>
int m(char a[], char A);
int main() {
	char c[30];
	char b;
	gets_s(c);
	scanf("%c", &b);
	m(c, b);
	return 0;
}
int m(char M[], char B) {
	int i, j;
	char newa[29];
	for (j = 0, i = 0; M[i] != '\0'; i++)
		if (M[i] != B)
			newa[j++] = M[i];
	newa[j] = '\0';
	puts(newa);
}