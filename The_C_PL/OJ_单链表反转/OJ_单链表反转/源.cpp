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
//#include<stdio.h>
//int main() {
//	int N, a[100000];
//	while (~scanf_s("%d", &N)) {
//		if (N == 0) {
//			printf("list is empty\n");
//			break;
//		}
//		else {
//			int i;
//			for (i = 0; i < N; i++) {
//				scanf_s("%d", &a[i]);
//			}
//			for (i = 0; i < N; i++) {
//				printf("%d ", a[i]);
//			}
//			printf("\n");
//			for (i = N - 1; i >= 0; i--) {
//				printf("%d ", a[i]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int N, a[100000];
//	while (scanf_s("%d", &N)!=0) {
//		if (N == 0) {
//			printf("list is empty\n");
//			break;
//		}
//		else {
//			int i;
//			for (i = 0; i < N; i++) {
//				scanf_s("%d", &a[i]);
//			}
//			for (i = 0; i < N; i++) {
//				printf("%d ", a[i]);
//			}
//			printf("\n");
//			for (i = N - 1; i >= 0; i--) {
//				printf("%d ", a[i]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
#include <stdio.h>
#include<malloc.h>
typedef int Status;typedef int ElemType;
typedef struct Node {
	ElemType data;
	struct Node *next;
}*LinkList, Node;
void CreatList(LinkList *L, int n) {
	Node *p, *r;
	int i, a;
	(*L) = (LinkList)malloc(sizeof(LinkList));
	r = (*L);
	for (i = 0; i < n; i++) {
		scanf_s("%d", &a);
		p = (LinkList)malloc(sizeof(LinkList));
		p->data = a;
		r->next = p;
		r = p;
	}
	r->next = '\0';
}
void Output(LinkList L) {
	Node *p;
	p = L;
	for (p = L; p->next != '\0'; p = p->next) {
		printf("%d ", p->next->data);
	}
	printf("\n");
}
void DealList(LinkList *L, int n) {
	Node *p, *q;
	p = (*L)->next;
	while (p->next !='\0') {
		q = p->next;
		p->next = q->next;
		q->next = (*L)->next;
		(*L)->next = q;
	}
}
int main(){
	int n;
	while (~scanf_s("%d", &n)) {
		if (n == 0)printf("list is empty");
		else {
			Node *L;
			CreatList(&L, n);
			Output(L);
			DealList(&L, n);
			Output(L);
		}
	}
	return 0;
}
/*#include<stdio.h>
int main() {
    int N, a[100000];
    while (~scanf_s("%d", &N)) {
        if (N == 0) {
            printf("list is empty\n");
            break;
        }
        else {
            int i;
            for (i = 0; i < N; i++) {
                scanf_s("%d", &a[i]);
            }
            for (i = 0; i < N; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
            for (i = N - 1; i >= 0; i--) {
                printf("%d ", a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
*/