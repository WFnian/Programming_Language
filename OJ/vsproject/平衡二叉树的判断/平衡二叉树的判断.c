/*
����
ÿ����һ�ö������Ĵ����㣨#����ʾ��ǰ�������
���Ȳ�����2000��ÿ�����Ϊһ��Сд��ĸ��һ�����֡�
���
����ÿ������Ķ������������ƽ������������Yes���������No
��������
#
abc####
�������
Yes
No
��ʾ
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAXSIZE  100
#define ERROR -1
#define OK 0
typedef struct BiNode {
	char data;
	int bf;
	struct BiNode *lchild;
	struct BiNode *rchild;
}BiNode, *BiTree;

BiTree CreatTree(char *datas, int len, int *i) {
	BiNode *root;
	if ((*i) > len)
		return NULL;
	if (datas[*i] == '#') {
		(*i)++;
		return NULL;
	}
	root = (BiNode*)malloc(sizeof(BiNode));
	root->data = datas[*i];
	(*i)++;
	root->lchild = CreatTree(datas, len, i);
	root->rchild = CreatTree(datas, len, i);
	return root;
}
int depth(BiTree root) {
	/*int ldepth, rdepth;
	if (root == NULL)
		return 0;
	else {
		ldepth = depth(root->lchild);
		rdepth = depth(root->rchild);
		return ldepth > rdepth ? ldepth + 1 : rdepth + 1;
	}*/
	int depthleft = 0;
	int depthright = 0;
	int depthval = 0;
	if (root == NULL) return depthval;
	depthleft = depth(root->lchild);
	depthright = depth(root->rchild);
	depthval = 1 + max(depthleft, depthright);
	return depthval;
}
bool isBalan(BiNode *root) {
	if (root == NULL) {
		return true;
	}
	int left = depth(root->lchild);
	int right = depth(root->rchild);
	int diff = left - right;
	if (diff < -1 && diff>1) 
		return false;
	return isBalan(root->lchild) && isBalan(root->rchild);
}

int main() {
	char str[20000];
	int i;
	BiTree T;
	while (gets(str) != NULL) {
		T = NULL;
		i = 0;
		T = CreatTree(str, strlen(str), &i);
		//printf("%d\n", depth(T));
		if (T == NULL)
			printf("Yes\n");
		else {
			if (isBalan(T) ==true)
				printf("Yes\n");
			else printf("No\n");
		}
	}
	return OK;
}