/*����
�ж���������ݣ�ÿ���������ռ���С���һ���Ǽ���A����һ������m��0<m<=100��
������A��ʼ��m��Ԫ�أ�������m������������A�е�Ԫ�ء��ڶ����Ǽ���B����һ������n(0<n<=100
)������B��ʼ��n��Ԫ�أ�������n������������B�е�Ԫ�ء�ÿ��������֮����һ���ո������
���
ÿ������������n+2�У�ǰ���зֱ��������A������B�е����ݣ�����n����ÿ��
��B��ȡ��Ԫ�ز��뵽Aβ����ļ���A��ÿ������֮����һ���ո������ÿ���������֮����һ�п��и�����
��������

5 1 5 2 6 3
3 1 7 9
1 3
2 2 7
4 2 5 1 4
4 1 2 4 5

�������

1 5 2 6 3
1 7 9
1 5 2 6 3
1 5 2 6 3 7
1 5 2 6 3 7 9

3
2 7
3 2
3 2 7

2 5 1 4
1 2 4 5
2 5 1 4
2 5 1 4
2 5 1 4
2 5 1 4*/
#include<stdio.h>
#include<malloc.h>
typedef struct Node {
	int data;
	struct Node *next;
}*LinkList, Node;
void CreatList(LinkList *L1,LinkList *L2) {
	LinkList p, r,q,x;
	int i, a, n, m,b;
	*L1 = (LinkList)malloc(sizeof(Node));
	r = *L1;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		p = (LinkList)malloc(sizeof(Node));
		p->data = a;
		r->next = p;
		r = p;
	}
	r->next = NULL;
	*L2 = (LinkList)malloc(sizeof(Node));
	x = *L2;
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d", &b);
		q = (LinkList)malloc(sizeof(Node));
		q->data = b;
		x->next = q;
		x = q;
	}
	x->next = NULL;
}
LinkList Check(LinkList L1,LinkList L2) {		/*���˸ı�*/
	LinkList p, q, r,z;
	p = L1->next;								
	q = L2->next;							
	for (p = L1->next; q->next = '\0'; p++) {		
		if (p->next->data == q->next->data)	{	
			return L1;							
		}										
		else {									
			while(p->next==NULL)				 
					p->next = q->next;			
		}										
		return L1;								
	}											
}
void  Output(LinkList L1) {
	LinkList p = L1;
	while (p->next) {
		if (p->next == '\0')break;
		printf("%d ", p->next->data);
		p = p->next;
	}
	printf("\n");
}
int main() {
	while (1) {
		LinkList L1, L2;
			CreatList(&L1,&L2);
			Output(L1);
			Check(L1,L2);
			Output(L1);
	}
	return 1;
}