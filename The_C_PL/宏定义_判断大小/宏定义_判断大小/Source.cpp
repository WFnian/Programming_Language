/*

��Ŀ�����ֵ����Сֵ���ĸ�����a��b��c��d����a�ĵ���λ��b�ĵ���λ�е����ֵ��c��d����Сֵ�ĳ˻�

���룺�������ݣ�ÿ�������ĸ�����a��b��c��d

�������ÿ���������������ĳ˻���ÿ������һ��

�������£����������ύ

#include <stdio.h>

#define max(a,b) a > b ? a : b

#define min(a,b) a < b ? a : b

int main() {

int a,b,c,d,e;

while(scanf("%d%d%d%d",&a,&b,&c,&d) != EOF) {

printf("%d\n",max(a&0xF,b&0xF)*min(c,d));

}

return 0;
}


����


�������ݣ�ÿ�������ĸ�����a��b��c��d


���


��ÿ���������������ĳ˻���ÿ������һ��


��������

1 2 3 4

�������

6*/
#include <stdio.h>
#define max(a,b) a > b ? a : b
#define min(a,b) a < b ? a : b
int main() {
	int a, b, c, d, e;
	while (scanf("%d%d%d%d", &a, &b, &c, &d) != EOF) {
		printf("%d\n", max(a & 0xF, b & 0xF)*min(c, d));
	}

	return 0;
}