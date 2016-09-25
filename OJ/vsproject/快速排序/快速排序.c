/*
��Ŀ����
���������Ƕ����������һ�ָĽ������Ļ���˼���ǣ�ͨ��һ�����򽫴�����ļ�
¼�ָ�����������Ĳ��֣�����һ���ּ�¼�Ĺؼ��־�����һ���ֵĹؼ���С����
�ֳ���������֮������Էֱ�����������ּ����������򣬴Ӷ�ʹ������������
����������㷨�����������£�

�ڱ����У�����һ������������ʹ�����������Ŀ�������ķ�����С�������򣬲������

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
#define  MAXSIZE 10
typedef struct {
	int r[MAXSIZE];
	int length;
}SqList;

void swap(SqList*L, int i, int j) {
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;
}
int Partition(SqList *L, int low, int high) {
	int pivotkey;
	pivotkey = L->r[low];
	while (low < high) {
		while (low < high&&L->r[high] >= pivotkey)
			high--;
		swap(L, &low, &high);
		while (low < high&&L->r[low] <= pivotkey)
			low++;
		swap(L, &low, &high);
	}
	return low;
}
void QSort(SqList *L, int low, int high) {
	int pivot;
	if (low < high) {
		pivot = Partition(L, low, high);
		QSort(L, low, pivot - 1);
		QSort(L, pivot + 1, high);
	}
}
void QuickSort(SqList *L) {
	QSort(L, 1, L->length);
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
	QuickSort(&L);
	for (int i = 1; i <= L.length; i++) {
		printf("%d ", L.r[i]);
	}
	printf("\n");
	return 0;
}