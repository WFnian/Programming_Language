/*��Ŀ����
����һ���������й���һ��������Ȼ���䷴ת��
���磺ԭ������Ϊ 2 3 4 5 ����ת֮��Ϊ5 4 3 2
����
�����������������ݣ�ÿ���������ռһ�У���һ��Ϊ����
����0������n����ʾ�õ�����ĳ��ȣ��������n����������
ʾ�����ÿһ��Ԫ�ء�����֮���ÿո����
���
���ÿ��������ݣ�����������У��ֱ��Ƿ�תǰ�ͷ�ת���
����Ԫ�أ��ÿո���� �������Ϊ�գ���ֻ���һ�У�list is empty
��������
5 1 2 3 4 5 
0
�������
1 2 3 4 5 
5 4 3 2 1 
list is empty*/
#include <stdio.h>
#include<malloc.h>
typedef int Status;
typedef int ElemType;
typedef struct Node {
	ElemType data;
	struct Node *next;
}*LinkList, Node;
//Status InitList(LinkList *L) {//��ʼ������
//	*L = (LinkList)malloc(sizeof(Node));
//	if (!(*L))
//		return 0;
//	(*L)->next = NULL;
//	return 1;
//}
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
	r->next = '\0';
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
void DealList(LinkList *L, int n) {
	LinkList p, q;
	p = (*L)->next;
	while (p->next != NULL) {
		q = p->next;
		p->next = q->next;
		q->next = (*L)->next;
		(*L)->next = q;
	}
}
int main(){
	int n;
	while (~scanf("%d", &n)) {
		if (n == 0)printf("list is empty");
		else {
			LinkList L;
		//	InitList(&L);
			CreatList(&L, n);
			Output(L);
			DealList(&L, n);
			Output(L);
		}
	}
	return 0;
}