/*С����ϲ��ѧϰC���ԣ����Ǹ����ŵ�ʱ��᷸�ܶ�ͼ���������������Щ����ɣ�
������С����д���ж�������ĸ�Ƿ�ΪСд��ĸ�ĳ����뽫�����������ύ��
#include <stdio.h>
int main()
{
char c;
while(scanf("%c",c))
{
if('a' <= c <= 'z')
{
printf("y ");
}
else
{
printf("n ");
}
}
return 0;
����
���Сд��ĸ
���
���ÿ��������ĸ�������Сд��ĸ�����y���������n
��������
a1
�������
yn
*/
#include <stdio.h>

int main()
{
	char str[222];
	int i;
	while (scanf("%s", str) != EOF) {
		for (i = 0; str[i] != NULL; i++) {
			if (str[i] <= 'z'&&str[i] >= 'a')
				printf("y");
			else printf("n");
		}
	}
}