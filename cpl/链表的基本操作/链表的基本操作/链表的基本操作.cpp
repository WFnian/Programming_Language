// ����Ļ�������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<stdlib.h>
#define OK 0
#define ERROR 1
typedef struct Node {
	int data;
	struct Node*next;
}LinkNode,*LinkList;

int Initlist(LinkList*L) {
	(*L) = (LinkList)malloc(sizeof(LinkList));
	(*L)->next = NULL;
	return OK;
}

int ClearList(LinkList *L, int e){
	LinkList p, q;
	p = (*L)->next;
	while (p != NULL) {
		q = p->next;
		free(p);
		p = q;
	}
	(*L)->next = NULL;
	return OK;
}

int Getelem(LinkList*L, int e) {
	int i, j;
	//LinkList p;
	//Node *L;
	*L = (LinkNode *)malloc(sizeof(LinkNode));   //����ͷ���ռ�
	(*L)->next = NULL;                      //��ʼ��һ��������

	int x;                         //xΪ�����������е�����
	while (scanf("%d", &x) != EOF)
	{
		LinkNode *p;
		p = (Node *)malloc(sizeof(Node));   //�����µĽ�� 
		p->data = x;                     //���������ֵ 
		p->next = (*L)->next;                    //�������뵽��ͷL-->|2|-->|1|-->NULL 
		(*L)->next = p;
	}
	return OK;
}
int main()
{
    return 0;
}

