/*��Ŀ����
���ݶ��������ʣ��ɶ�������ǰ����������������򣬿���Ψһȷ��һ
�ö���������������и���㲻��ͬ�������д���򣬸�������Ķ�����
��ǰ����������������򣬼��㲢�������������
����
�����һ��Ϊ�������ĸ���n��0��n��1000�����n��ÿ�����������ַ���
��ɣ���һ���Ƕ�������ǰ������򣬵ڶ����Ƕ������������������
������ÿ���ַ���ʾһ����㣬�ַ������Ȳ�����2000��
���
��ÿ�������������һ�к��������
��������
2
abc bac
ab ba
�������
bca
ba
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
	if (len <= 0) {
		return NULL;
	}
	if (len > 0) {
		root =(BiNode*) malloc(sizeof(BiNode));
		root->data = pre[0];
		for (p = mid; p < mid + len; p++) {
			if (*p = pre[0])
				break;
		}
		lenleft = p - mid;
		root->lchild = CreatTree1(pre + 1, mid, lenleft);
		root->rchild = CreatTree1(pre + lenleft + 1, p + 1, len - lenleft - 1);
	}	
	return root;
}

void AftVisit(BiTree T) {
	if (T == NULL)
		return ;
	AftVisit((T)->lchild);
	AftVisit((T)->rchild);
	printf("%c", (T)->data);
}

void cengci(BiNode *r)
{
	int i = 0, j = 1;
	BiNode *t[103];
	t[0] = r;
	while (i < j)//���в�Ϊ��ʱ
	{
		if (t[i] != NULL)// i ��㲻Ϊ��ʱ
		{
			printf("%c", t[i]->data);//���ʸýڵ�
			t[j++] = t[i]->lchild; //���֧������
			t[j++] = t[i++]->rchild; //�ҷ�֧������
		}
		else
			i++;
	}
}
int main() {
	char str1[200], str2[200];
	int N, i;
	BiTree T;
	//scanf("%i", &N);
	while (scanf("%i", &N) != EOF) {
		for (i = 0; i < N; i++) {
			scanf("%s %s", str1, str2);
			T = NULL;
			T = CreatTree1(str1, str2, strlen(str2));
			AftVisit(T);
			//cengci(&T);
			printf("\n");
		}
	}

	return OK;
}
