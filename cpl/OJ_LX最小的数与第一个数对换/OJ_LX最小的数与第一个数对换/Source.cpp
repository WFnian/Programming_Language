/*����10����������������С�������һ�����Ի����������������һ
�����Ի���д���������� ������10�������ڽ��д��������10������
����
10������
���
������ʮ������ÿ�������һ���ո�ע�����һ������Ҳ�пո�
��������
2 1 3 4 5 6 7 8 10 9
�������
1 2 3 4 5 6 7 8 9 10 */
#include<stdio.h>
int main() {
	int a[10], i, j;
	int Max, Min, Temp1 = 0, Temp2 = 0;
	for (i = 0; i < 10; i++) {
		scanf("%i", &a[i]);
	}
	Max = Min = a[0];
	for (i = 0; i < 10; i++) {
		if (a[i] > Max) {
			Max = a[i];
			Temp1 = i;
		}
		if (a[i] < Min) {
			Min = a[i];
			Temp2=i;
		}
	}
	
	Max = a[9];
	a[9] = a[Temp1];
	a[Temp1] = Max;

	Min = a[0];
	a[0] = a[Temp2];
	a[Temp2] = Min;
	for (i = 0; i < 10; i++) {
		printf("%i ", a[i]);
	}
	printf("\n");
	return 0;
}