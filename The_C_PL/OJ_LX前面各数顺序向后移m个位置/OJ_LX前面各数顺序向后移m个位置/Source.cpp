/*��n��������ʹǰ�����˳�������m��λ�ã����m�������ǰ��m������
дһ������ʵ�����Ϲ��ܣ���������������n����������������n������
����
�������ݵĸ���n n������ �ƶ���λ��m
���
�ƶ����n����
��������
10
1 2 3 4 5 6 7 8 9 10
2
�������
9 10 1 2 3 4 5 6 7 8 */
#include<stdio.h>
int main() {
	int a[22], N, i, j, Poist, b[22];
	while (scanf("%d", &N)!=EOF) {
		//scanf("%d", &N);
		for (i = 0; i < N; i++) {
			scanf("%d", &a[i]);
		}
		scanf("%d", &Poist);
		for (i = N - Poist, j = 0; i < N; i++, j++) {
			b[j] = a[i];
		}
		for (i = 0, j = Poist; j < N; i++, j++) {
			b[j] = a[i];
		}
		for (i = N - Poist, j = 0; i < Poist; i++, j++) {
			b[j] = a[i];
		}
		b[N] = NULL;
		for (i = 0; i < N; i++) {
			printf("%d ", b[i]);
		}
		printf("\n");
	}
}