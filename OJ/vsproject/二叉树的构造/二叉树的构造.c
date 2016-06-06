/*��Ŀ����
��һ�ö�������ǰ��������������������Ψһȷ��һ�ö�������
����
ÿ������Ϊһ�÷ǿն�������ǰ������򴮺���������򴮣�����
���Ⱦ�������2000����ǰ������������������м���һ���ո��
���� ÿ�����Ϊһ���ַ�����ĸ�����֣�,�Ҳ�������ͬ��㡣
���
��ÿ�����룬�����Ӧ�������ĺ��������Ͳ�α�����һ����
���Ӧһ����������������Ͳ�α������м���һ���ո������
��������
abc bac
ab ba
�������
bca abc
ba ab
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE  100
#define ERROR -1
#define OK 0
typedef char DataType;

typedef struct BiNode {
	DataType data;
	struct BiNode *lchild;
	struct BiNode *rchild;
}BiNode, *BiTree;

BiTree CreatTree1(DataType *pre, DataType *mid, int len) {
	BiNode *root = NULL;
	DataType *p;
	int lenleft = 0;
	if (len > 0) {
		root = malloc(sizeof(BiNode));
		root->data = pre[0];
		for (p = mid; p < mid + len; p++, lenleft++) {
			if (*p == pre[0])
				break;
		}
		root->lchild = CreatTree1(pre + 1, mid, lenleft);
		root->rchild = CreatTree1(pre + lenleft + 1, p + 1, len - lenleft - 1);
	}
	return root;
}

void AftVisit(BiTree T) {
	if (T == NULL)
		return;

	AftVisit((T)->lchild); 
	AftVisit((T)->rchild);
	printf("%c", (T)->data);
	//return OK;
}

void LevelOrder(BiTree T) {
	BiTree queue[MAXSIZE];
	int front, rear;
	if (T == NULL) return;
	front = -1;
	rear = 0;
	queue[rear] = T;
	while (front != rear)
	{
		front++;
		printf("%c", queue[front]->data);
		if (queue[front]->lchild != NULL)
		{
			rear++;
			queue[rear] = queue[front]->lchild;
		}
		if (queue[front]->rchild != NULL)
		{
			rear++;
			queue[rear] = queue[front]->rchild;
		}
	}
}

int main() {
	char str1[200], str2[200];
	int N, i;
	BiTree T;
	//scanf("%i", &N);
	//while (scanf("%i", &N) != EOF) {
		scanf("%i", &N);
		for (i = 0; i < N; i++) {
	//while(~scanf("%s %s", str1, str2)){
			scanf("%s %s", str1, str2);
			T = NULL;
			T = CreatTree1(str1, str2, strlen(str2));
			AftVisit(T);
			/*printf(" ");
			LevelOrder(T);*/
			printf("\n");
	//	}
	}

	return OK;
}