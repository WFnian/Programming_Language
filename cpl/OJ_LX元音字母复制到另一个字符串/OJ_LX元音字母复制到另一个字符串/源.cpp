/*дһ�������������ַ����е�Ԫ����ĸ���Ƶ���һ���ַ�����Ȼ�������
����
һ���ַ���
���
˳��������е�Ԫ����ĸ��aeiuo��
��������
abcde
�������
ae
*/
#include<stdio.h>
/*char change(char str[]) {
	char chastr[22];
	int i, len = 0, j;
	for (j=0,i = 0; str[i] != NULL; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'u' || str[i] == 'o') {
			len++;
			chastr[j] = str[i];
			j++;
		}
	}
	chastr[len] = NULL;
	printf("%s\n", chastr);

	return 0;
}*/
int main() {
	char str[222];
	scanf("%s", str);
	char chastr[222];
	int i, len = 0, j;
	for (j = 0, i = 0; str[i] != NULL; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'u' || str[i] == 'o') {
			len++;
			chastr[j] = str[i];
			j++;
		}
	}
	chastr[len] = NULL;
	printf("%s\n", chastr);
	return 0;
}
	
