/*
�����кܶ೤���Σ�ÿһ�������ζ���һ����ţ������ſ����ظ�����֪����������εĿ�ͳ�����š�������������������Ҫ����һ�·�ʽ����Ĭ����������Ǵ�С���󣩣�

1.���ձ�Ŵ�С��������

2.���ڱ����ȵĳ����Σ����ճ����εĳ�����

3.�����źͳ�����ͬ�����ճ����εĿ�����

4.�����š���������ͬ����ֻ����һ����������������,ɾ������ĳ����Σ�����ź�����ָ����ʽ��ʾ���еĳ����Σ�

����
��һ����һ������ 0<n<10000,��ʾ��������n��������ݣ�
ÿһ���һ����һ������ 0<m<1000����ʾ��m�������Σ�
��������m�У�ÿһ���������� ����һ������ʾ�����εı�ţ�

�ڶ����͵�������ֵ��ı�ʾ������ֵС�ı�ʾ�����
˵������һ�������Σ�����Լ���������Ŷ�С��10000����

���
˳�����ÿ�����ݵ����з��������ĳ����ε� ��� �� ��

��������
1
8
1 1 1
3 1 9
1 1 2
1 2 1
1 2 2
2 1 1
2 1 2
2 2 1
�������
1 1 1
1 2 1
1 2 2
2 1 1
2 2 1
*/
#include<stdio.h>
#include<malloc.h>
#define MAX 10001
typedef struct {
	int num;
	int len;
	int wid;
}rectangular;
//void Popo1(rectangular rect[MAX], int n2) {
//	int i, j, temp;
//	for (i = 0; i < n2; i++)
//	{
//		for (j = n2 - 1; j > 0; j--)
//		{
//			if (rect[j].len < rect[j - 1].len)
//			{
//				temp = rect[j].len;
//				rect[j].len = rect[j - 1].len;
//				rect[j - 1].len = temp;
//			}
//		}
//	}
//} 
int main(){
	int n1, n2, i , j, temp;
	int num, len, wid;
	rectangular *rect[MAX],temp1[MAX];
	while (scanf_s("%d", &n1) != EOF) {
		scanf_s("%d", &n2);
		for (i = 0; i < n2; i++){
			scanf_s("%d %d %d", &num, &len, &wid);
			rect[i] = (rectangular*)malloc(sizeof(rectangular));
			rect[i]->num = num;
			if (len > wid) {
				rect[i]->len = len;
				rect[i]->wid = wid;
			}
			else {
				rect[i]->len = wid;
				rect[i]->wid = len;
			}
		}
		printf("_______________________________\n");
		for (i = 0; i < n2; i++)
		{
			for (j = n2 - 1; j > 0; j--)
			{
				if (rect[j]->num < rect[j - 1]->num)
				{
					temp = rect[j]->len;
					rect[j]->len = rect[j - 1]->len;
					rect[j - 1]->len = temp;
					/*temp1[0].num = rect[j].num;
					rect[j].num = rect[j + 1].num;
					rect[j + 1].num = temp1[0].num;*/
				}
			}
		}
		for (i = 0; i < n2; i++) {
			printf("%d %d %d\n", rect[i]->num, rect[i]->len, rect[i]->wid);
		}
	}
}
/*
for (i = 0; i < n2; i++) {
	printf("%d %d %d\n", rect[i].num, rect[i].len, rect[i].wid);
}
*/