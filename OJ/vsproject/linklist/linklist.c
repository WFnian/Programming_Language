/*
��������ֻ��һ�飬��һ����n+1����������һ���������������µ�������Ŀn��������n����������һ��������������ʼ���б�ģ����������˳�����б��е�˳���෴��Ҳ����˵����б�����1��2��3��ô�����˳����3��2��1��
�ڶ�����һ������m���������滹��m�С�ÿ����һ���ַ������ַ����ǡ�get������insert������delete������show���е�һ�֡�����ǡ�get�����ߡ�delete������������һ������a�������û���ɾ����a��Ԫ�أ�����ǡ�insert��������������������a��e�������ڵ�a��λ��ǰ�����e����show��֮��û��������
���
�����ȡ�ɹ����������Ԫ�أ����ɾ���ɹ��������delete OK���������ȡʧ�ܻ���ɾ��ʧ�ܣ��������get fail���Լ���delete fail�����������ɹ��������insert OK�������������insert fail��������ǡ�show��������б��е�����Ԫ�أ�����б��ǿյģ��������Link list is empty����ע�����е�˫���ž��������
��������
3 3 2 1
21
show
delete 1
show
delete 2
show
delete 1
show
delete 2
insert 2 5
show
insert 1 5
show
insert 1 7
show
insert 2 5
show
insert 3 6
show
insert 1 8
show
get 2
�������
1 2 3
delete OK
2 3
delete OK
2
delete OK
Link list is empty
delete fail
insert fail
Link list is empty
insert OK
5
insert OK
7 5
insert OK
7 5 5
insert OK
7 5 6 5
insert OK
8 7 5 6 5
7
*/
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 22
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
	if ((*L) == NULL)
		return ERROR;
	(*L)->next = NULL;
	return OK;

}
//β�巨��������
/*Status CreatList(LinkList *L, int n) {
	int e;
	LinkList p, r;
	r = (*L);
	int i;
	for (i = 0; i < n; i++) {
		p = (LinkList)malloc(sizeof(LinkList));
		scanf("%d", &e);
		p->data = e;
		p->next = NULL;
		r->next = p;
		r = p;
	}
	return OK;
}*/
//ͷ�巨��������
Status CreatList(LinkList *L, int n) {
	LinkList p;
	int i, elem;
	for (i = 0; i < n; i++) {
		scanf("%d", &elem);
		p = (LinkList)malloc(sizeof(LinkList));
		p->data = elem;
		p->next = (*L)->next;
		(*L)->next = p;
	}
	return OK;
}

//ɾ�������е�Ԫ�أ� posλ�õ�Ԫ��
Status DeleList(LinkList *L, int pos) {
	int i = 0;
	LinkList p, q;
	p = (*L);
	if ((*L) == NULL||(*L)->next == NULL) {
		printf("delete fail\n");
		return ERROR;
	}
	while (p != NULL&&i < pos - 1) {
		p = p->next;
		++i;
	}
	
	if (p->next == NULL) {
		printf("delete fail\n");
		return ERROR;
	}
	else
	{
		p->next = p->next->next;
		printf("delete OK\n"); 
		return OK;
	}
	return OK;
}

//��posλ�ò���elemԪ��

Status InsertList(LinkList *L, int pos, DataType elem) {
	int i = 0;
	LinkList p, s;
	p = (*L);
	while (p != NULL&&i < pos - 1) {
		p = p->next;
		++i;
	}
	if (p == NULL || i > pos) {
		return ERROR;
	}
	s = (LinkList)malloc(sizeof(LinkList));
	s->data = elem;
	s->next = p->next;
	p->next = s;
	printf("insert OK\n");
	return OK;

}

//��ȡposλ�õ�Ԫ��
Status GetList(LinkList *L, int pos) {
	LinkList p;
	p = (*L);
	int i = 0;
	while (p != NULL&&i < pos ) {
		p = p->next;
		++i;
	}
	printf("%d\n", p->data);
	return OK;
}
Status PrintList(LinkList *L) {
	if (*L == NULL||(*L)->next==NULL) {
		printf("Link list is empty\n");
		return ERROR;
	}
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
	int N, NUM;
	int i;
	char str[MAXSIZE];
	scanf("%d", &N);
	InitList(&L);
	CreatList(&L, N);
	while (scanf("%d", &NUM) != NULL) {
		for (i = 0; i < NUM; i++) {
			scanf("%s", str);
			switch (str[0]) {
			case 's': {
				PrintList(&L);
			}break;
			case 'd': {
				int dele;
				scanf("%d", &dele);
				DeleList(&L, dele);
			}break;
			case 'g': {
				int pos;
				scanf("%d", &pos);
				GetList(&L, pos);
			}break;
			case 'i': {
				int pos, elem;
				scanf("%d %d", &pos, &elem);
				InsertList(&L, pos, elem);
			}break;
			default:break;
			}
		}
	}

	return OK;
}