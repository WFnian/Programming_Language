/*��Ŀ����
����һ���������������й�����������ɾ�����е��ظ�Ԫ��
����
�����������������ݣ�ÿ���������ռһ�У���һ��Ϊ���ڵ�
��0������n����ʾ�õ�����ĳ��ȣ��������n����
������ʾ�����ÿһ��Ԫ�ء�����֮���ÿո����
���
���ÿ��������ݣ�����������У��ֱ���ɾ��ǰ��ɾ�����
����Ԫ�أ��ÿո���� �������Ϊ�գ���ֻ���һ�У�list is empty
��������
5 1 2 3 4 5
5 1 1 2 2 3
0
�������
1 2 3 4 5 
1 2 3 4 5 
1 1 2 2 3 
1 2 3 
list is empty*/
//#include<stdio.h>
//#include<stdlib.h>
//struct numb {
//	int num;
//	struct numb*next;
//}del, *dele;
//void Del_bnn(struct numb *head, struct numb*p);
//void Del_bnn(struct numb *head,struct numb*p){
//	struct numb*q;
//	if (p == NULL) {
//		;
//		return;
//	}
//	if (p == head) {
//		head = p->next;
//		q = p;
//		free(q);
//	}
//	else {
//		q = p->next;
//		p->next = q->next;
//		free(q);
//	}
//}
//void print_s() {
//
//}
//int main() {
//	int N, a[200];
//	while (2) {
//		scanf("%d", &N);
//		for (int i = 0; i < N; i++) {
//			scanf("%d", &a[i]);
//		}
//	}
//	//Del_bnn(N, &a);
//
//}
/*#include<stdio.h>
int main() {
	int a[60000], i, j;
	int M = 0, N;
	while (~scanf("%d", &N)) {
		if (N == 0) {
			printf("list is empty\n");
			break;
		}
		for (i = 0; i < N; i++) {
			scanf_s("%d", &a[i]);
		}
		for (i = 0; i < N; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
		for (i = 0, j = 0; i < N; i++) {
			if (a[i] != a[i + 1]) {
				a[j++] = a[i];
			}
			else {
				M++;
			}
		}
		for (j = 0; j < N - M; j++) {
			printf("%d ", a[j]);
		}
		printf("\n");
	}
	return 0;

}*/
#include <stdio.h>
#include<malloc.h>
typedef int Status;
typedef int ElemType;
typedef struct Node {
	ElemType data;
	struct Node *next;
}*LinkList, Node;
Status InitList(LinkList *L) {
	*L = (LinkList)malloc(sizeof(Node));
	if (!(*L))
		return 0;
	(*L)->next = NULL;
	return 1;
}
void CreatList(LinkList *L, int n) {
	LinkList p, r;
	int i, a;
	*L = (LinkList)malloc(sizeof(Node));
	r = *L;
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		p = (LinkList)malloc(sizeof(Node));
		p->data = a;
		r->next = p;
		r = p;
	}
	r->next = NULL;
}

LinkList RemoveDupNode(LinkList L) {
	LinkList p, q, r;
	p = L->next;
	if (p == NULL)
		return 0;
	while (p) {
		q = p;
		while (q->next) {
			if (q->next->data == p->data) {
				r = q->next; //r������Ҫɾ���Ľ�� 
				q->next = r->next; //��Ҫɾ���Ľ���ǰ������� 
				free(r);
			}
			else
				q = q->next;
		}
		p = p->next;
	}
	return L;
}

Status Output(LinkList L) {
	LinkList p = L;
	if (p->next == NULL)
		return 0;
	while (p->next) {
		printf("%d ", p->next->data);
		p = p->next;
	}
	printf("\n");
	return 1;
}

int main() {
	int n;
	while (~scanf("%d", &n)) {
		if (n == 0)
			printf("list is empty\n");
		else {
			LinkList L;

			InitList(&L);
			CreatList(&L, n);
			Output(L);
			RemoveDupNode(L);
			Output(L);
		}
	}
	return 1;
}