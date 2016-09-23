/*
��Ŀ����
��������һ�����öѽṹ��������ķ�������ֻ��Ҫһ����¼��С�ĸ����ռ䣬
ÿ��������ļ�¼����Ҫռ��һ���洢�ռ䡣
���Ƚ���С���ѻ����ѣ�Ȼ��ͨ�����öѵ����ʼ��Ѷ���Ԫ������С�����
ֵ���Ӷ����εó�ÿһ��Ԫ�ص�λ�á�
��������㷨�����������£�

�ڱ����У�����һ������������ʹ�����������Ķ�����ķ�����С�������򣬲������

����
����ĵ�һ�а���1��������n����ʾ����n��������Ҫ������������n������100000��
�ڶ��а���n���ÿո����������������ʾn����Ҫ�����������
���
ֻ��1�У�����n����������ʾ��С����������ϵ����������� ����ÿ�����������
һ���ո񣬲���ע����β������С�
��������
10
2 8 4 6 1 10 7 3 5 9
�������
1 2 3 4 5 6 7 8 9 10
*/

#include<stdio.h>
#define  MAXSIZE 20
typedef struct {
	int r[MAXSIZE];
	int length;
}SqList;

void swap(SqList*L, int i, int j) {
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;
}

void HeadAdjust(SqList *L, int s, int m) {
	int temp, j;
	temp = L->r[s];
	for (j = 2 * s; j <= m; j *= 2) {
		if (j < m&&L->r[j] < L->r[j + 1])
			++j;
		if (temp > L->r[j])
			break;
		L->r[s] = L->r[j];
		s = j;
	}
	L->r[s] = temp;
}

void HeapSort(SqList *L) {
	int i;
	for (i = L->length / 2; i > 0; i--) 
		HeadAdjust(L, i, L->length);
	for (i = L->length; i > 1; i--) {
		swap(L, 1, i);
		HeadAdjust(L, 1, i - 1);
	}
}

int main() {
	int len, elem;
	scanf("%d", &len);
	SqList L;
	L.length = len;
	for (int i = 1; i <= L.length; i++) {
		scanf("%d", &elem);
		L.r[i] = elem;
	}
	HeapSort(&L);
	for (int i = 1; i <= L.length; i++) {
		printf("%d ", L.r[i]);
	}
	printf("\n");
	return 0;
}