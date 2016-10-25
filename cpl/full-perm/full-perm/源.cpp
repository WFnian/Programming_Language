/*
��R=(1, 2, .., n)������R��ȫ���С� ���η����ȫ���е��㷨˼�룺 ��R=(1, 2, .., n)��ȫ����ΪP(R)�� ��R=()����P()=()�� ����P(R)={(1)P(2, 3, .., n),(2)P(1, 3, .., n), (3)P(2, 1, .., n), .., (n)P(2, .., n-1, 1)}�� ͬ���أ�P(2, 3, .., n)={(2){3, 4, .., n}, (3){2, 4, .., n}, .., (n){3, .., n-1, 2}}
����
����Ϊһ�鲻����7��������
���
��ÿ�����������n���÷��η����㲢���1..n��ȫ���С�
��������
1
2
3
�������
1
1 2
2 1
1 2 3
1 3 2
2 1 3
2 3 1
3 2 1
3 1 2
*/
#include<stdio.h>
#include<malloc.h>
void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void perm(int list[],int k,int m) {
	if (k == m) {
		for (int i = 0; i <= m; i++) {
			printf("%d ", list[i]);
		}
		printf("\n");
	}
	else for (int i = k; i <= m; i++) {
		swap(&list[k],&list[i]);
		perm(list,k+1,m);
		swap(&list[k], &list[i]);
	}
}
int main() {
	int n;
	int *list = (int*)malloc(20000);
	//int list[] = { 1, 2,3,4,5 };
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n+2; i++) {
			list[i] = i+1;
		}
		//list[1] = { 1 ,2 };
		perm(list, 0, n-1);
	}
	return 0;
}