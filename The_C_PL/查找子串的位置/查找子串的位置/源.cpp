/*3���ַ�����ÿ���ַ���ռһ�С�ÿ�а����ɿո�ָ��������ַ������ַ�������Ӣ��Сд��ĸ����ҳ��Ȳ�����100��3���ַ�����ÿ���ַ���ռһ�С�ÿ�а����ɿո�ָ��������ַ������ַ�������Ӣ��Сд��ĸ����ҳ��Ȳ�����100��
���
ÿ���������2�У���һ����S��ÿ�αȽϵ��ַ����ڶ����Ǻ�һ���ַ�����ǰһ���ַ����е�λ�ã������ƥ�䣬�����0��
��������
string str
thisisalongstring isa
nosubstring subt
�������
str
1
thisisisa
5
nosubsubsttring
0*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 44

typedef char DataType;
typedef int Status;
typedef struct {
	char str[MAXSIZE];
}*String;

Status Strlength(String S) {
	int i = 0, len = 0;
	for (i = 0; S->str[i] != NULL; i++) {
		len++;
	}
	return len;
}

Status Strcomper(String Sub, String T) {
	int a;
	a = strcmp(Sub->str, T->str);
	return a;
}

String SubString(String Sub, String S, int i, int m) {
	int j;
	for (j = i; j < m; j++) {
		Sub->str[j] = S->str[j];
	}
	Sub->str[m] = NULL;
	
	return Sub;

}
Status Index(String S,String T, int pos) {
	int n, m, i;
	String Sub;
	if (pos > 0) {
		n = Strlength(S);
		m = Strlength(T);
		i = pos;
		while (i <= n - m + 1) {
			Sub = SubString(Sub, S, i, m);
			if (Strcomper(Sub, T) != 0) {
				++i;
			}
			else return i;
		}
	}
	return 0;
}
int main() {

	String S, T;
	while (gets_s(S->str) != NULL) {
		gets_s(T->str);
		Index(S, T, 0);
	}
}