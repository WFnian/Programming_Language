#include<stdio.h>
int main() {
	char s[22], k, n;
	printf("�������ַ�����\n");
	gets(s);
	printf("��������Ҫ���ҵ���ĸ��\n");
	scanf("%c", &k);
	int flag=0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == k) {
			n = k - 32;
			flag = 1;
		}
	}
	if (flag == 1) {
		printf("�ҵ��ˣ�%c", n);
	}
	else printf("û�ҵ���");

	return 0;

}
