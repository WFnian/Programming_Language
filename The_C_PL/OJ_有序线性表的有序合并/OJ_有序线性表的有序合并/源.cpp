//#include<stdio.h>
//void MergeList(List La, List Lb, List &Lc) {
//	int La_len, Lb_len;
//	Elemtype ai, bj;
//	int i = 1, j = 1, k = 0;
//	InitList(Lc);
//	La_len = ListLength(La);
//	Lb_len = ListLength(Lb);
//	while ((i <= La_len) && )(J <= Lb_len)){
//		GetElem(La, i, ai);
//		GetElem(Lb, j, bj);
//		if (ai <= bj) {
//			ListInsert(Lc, ++k, bj);
//			++j;
//		}
//	}
//	while (i <= La_len) {
//		GetElem(La, i++, ai);
//		ListInaert(Lc, ++k, ai);
//	}
//	while (j <= Lb_len) {
//		GetElem(Lb, j++, bi);
//		ListInaert(Lc, ++k, bi);
//	}
//}
/*��֪���Ա� LA �� LB �е�����Ԫ�ذ�ֵ�ǵ�
���������У���Ҫ�� LA �� LB �鲢Ϊһ���µ�����
�� LC�� �� LC �е�����Ԫ����Ȼ��ֵ�ǵݼ��������С�
���磬��LA=(3,5,8,11) ,LB=(2,6,8,9,11,15,20) ��
LC=(2,3,6,6,8,8,9,11,11,15,20)
�㷨�������£�
����������Ҫ���֪��LC�е�����Ԫ�ػ���LA�е�
����Ԫ�أ�����LB�е�����Ԫ�أ���ֻҪ����LCΪ�ձ�Ȼ��LA
��LB�е�Ԫ��������뵽LC�м��ɡ�ΪʹLC��Ԫ�ذ�ֵ�ǵݼ�������
�У���������ָ�� i �� j �ֱ�ָ��LA��LB��ĳ��Ԫ�أ����� i 
��ǰ��ָ��Ԫ��Ϊ a��j ��ָ��Ԫ��Ϊ b����ǰӦ���뵽 LC �е�Ԫ
�� c Ϊ c = a < b ? a : b��Ȼ��ָ�� i �� j �ĳ�ֵ��Ϊ1��ʵ��
д����ʱ�����Ǵ� 0 ��ʼ�ģ�������ָԪ�ز��� LC ֮���� LA ����
LB ��˳����ơ������鲢�㷨����ͼ��
����
�ж���������ݣ�ÿ���������ռ���С���һ���Ǽ���A����һ��
����m��0<=m<=100��������A��ʼ��m��Ԫ�أ�������m���ǵݼ�
���������������A�е�Ԫ�ء��ڶ����Ǽ���B����һ������n(0<=n<=100)������B��ʼ��n��Ԫ
�أ�������n���ǵݼ����������������B�е�Ԫ�ء�ÿ��������֮����һ���ո������
���
ÿ���������ֻҪ�����һ�У���һ�к��� m+n �����Լ��� A �ͼ�
��B �е�Ԫ�ء���������Ƿǵݼ��ġ�ÿ����������һ���ո������
��������
4 3 5 8 11
7 2 6 8 9 11 15 20
�������
2 3 5 6 8 8 9 11 11 15 20
��ʾ*/
#include<stdio.h>
int main() {
	//int N;// M, a[2222], b[222], c[2222], i, j, temp;
	while (1) {
		int N;
		int M, a[222], b[222], c[2222], i, j, temp;
		scanf("%i", &N);
		for (i = 0; i < N; i++) {
			scanf("%d", &a[i]);
		}
		scanf("%d", &M);
		for (i = 0; i < M; i++) {
			scanf("%d", &b[i]);
		}
		for (i = 0; i < N; i++) {
			c[i] = a[i];
		}
		for (i = N, j = 0; j < M, i < M + N; i++, j++) {
			c[i] = b[j];
		}

		for (i = 0; i < M + N - 1; i++) {
			for (j = 0; j < M + N - 1 - i; j++) {
				if (c[j] > c[j + 1]) {
					temp = c[j];
					c[j] = c[j + 1];
					c[j + 1] = temp;
				}
			}
		}
		for (i = 0; i < M + N-1; i++) {
			printf("%d ", c[i]);
		}
		printf("%d\n", c[M + N -1]);
	}

	return 0;

}
//int main() {
//	int set_A[100], set_B[100], len_A, len_B, i = 0, j = 0;
//	scanf("%i", &len_A);
//	for (i = 0; i < len_A; i++) {
//		scanf("%i", &set_A[i]);
//	}
//	scanf("%i", &len_B);
//	for (i = 0; i < len_B; i++) {
//		scanf("%i", &set_B[i]);
//	}
//	for (i = 0, j = 0; i < len_A&&j < len_B;) {
//		if (set_A[i] <= set_B[j]) {
//			printf("%i ", set_A[i]);
//			++i;
//		}
//		else {
//			printf("%i ", set_B[j]);
//			++j;
//		}
//
//		for (; i < len_A; i++) {
//		printf("%d",set_A[i]);
//		}
//		for (; j < len_B; j++) {
//		printf("%d",set_B[j]);
//		}
//
//	}
//}