/*
��Ŀ����
����һ���������������й�����������ɾ�����е��ظ�Ԫ��
����
�����������������ݣ�ÿ���������ռһ�У���һ��Ϊ���ڵ���0������n����ʾ�õ�����ĳ��ȣ��������n����������ʾ�����ÿһ��Ԫ�ء�����֮���ÿո����
���
���ÿ��������ݣ�����������У��ֱ���ɾ��ǰ��ɾ���������Ԫ�أ��ÿո����

�������Ϊ�գ���ֻ���һ�У�list is empty

��������
5 1 2 3 4 5
5 1 1 2 2 3
0
�������
1 2 3 4 5
1 2 3 4 5
1 1 2 2 3
1 2 3
list is empty
*/
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define OK 0
#define ERROR -1
typedef int Status;
typedef int DataType;

typedef struct Node {
	DataType data;
	struct Node *next;
}LinkNode, *LinkList;

Status InitList(LinkList *L) {
	(*L) = (LinkList)malloc(sizeof(LinkList));
	if (*L == NULL)
		return ERROR;
	(*L)->next = NULL;
	return OK;
}

Status CreatList(LinkList *L, int n) {
	LinkList p;
	int i = 0;
	DataType elem;
	for (i = 0; i < n; i++) {
		p = (LinkList)malloc(sizeof(LinkList));
		scanf("%d", &elem);
		p->data = elem;
		p->next = (*L)->next;
		(*L)->next = p;
	}
	return OK;
}

Status DeleList(LinkList *L) {
	LinkList P;
	P = (*L);
	while (P != NULL) {
		if (P->data == P->next->data) {
			P->next = P->next->next;
		}
		P = P->next;
	}
	return OK;
}

Status Print(LinkList *L) {
	LinkList p;
	p = (*L)->next;
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	return OK;
}
int main() {
	LinkList L;
	int N;
	InitList(&L);
	while (~scanf("%d", &N)) {
		CreatList(&L, N);
		DeleList(&L);
		Print(&L);
	}

	return OK;
}