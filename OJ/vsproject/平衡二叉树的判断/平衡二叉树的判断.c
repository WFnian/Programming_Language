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
#include<stdlib.h>
#include<string.h>
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

int main() {

	char str[20000];
	int i;
	while (gets(str) != NULL) {
		BiTree T;
		T = NULL;
		i = 0;
		T = CreatTree(str, strlen(str), &i);
	}

	return OK;
}