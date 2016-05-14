//#include<string.h>
//#include<stdio.h>
//#include<stdlib.h>
//#define MAXSIZE 100
//#define OK 0
//#define ERROR -1
//typedef int Status;
//typedef int DataType;
//
//typedef struct TreeNode {
//	int data;
//	struct TreeNode* Lchild;
//	struct TreeNode* Rchild;
//}TreeNode, *P_TreeNode;
//
//int CreatTree(P_TreeNode&T) {
//	char data;
//	scanf("%c", &data);
//	if (data == '#') {
//		(T) = NULL;
//		return 0;
//	}
//	else {
//		(T) = (P_TreeNode)malloc(sizeof(P_TreeNode));
//		if ((T) = NULL)
//			return ERROR;
//		(T)->data = data;
//		CreatTree(T->Lchild);
//		CreatTree(T->Rchild);
//	}
//}
//
//////ǰ�����
////int PreOrderTraversal(P_TreeNode *T) {
////	if (T == NULL)
////		return ERROR;
////	printf("%c ", (*T)->data);
////	PreOrderTraversal(&(*T)->Lchild);
////	PreOrderTraversal(&(*T)->Rchild);
////	return OK;
////}
////
//////�������
////int MediumOrderTraversal(P_TreeNode*T) {
////	if (T == NULL)
////		return ERROR;
////	MediumOrderTraversal(&(*T)->Lchild);
////	printf("%c ", (*T)->data);
////	MediumOrderTraversal(&(*T)->Rchild);
////	return OK;
////}
//
////�������
//int AfterOrderTraversal(P_TreeNode T) {
//	if ((T) == NULL)
//		return ERROR;
//	AfterOrderTraversal(T->Lchild);
//	AfterOrderTraversal(T->Rchild);
//	printf("%c ", T->data);
//	return OK;
//}
//
//int main() {
//	P_TreeNode T;
//	CreatTree(T);
//	AfterOrderTraversal(T);
//	return OK;
//}
#include<stdio.h>
#include<stdlib.h>

typedef struct TreeNode {
	int data;
	struct TreeNode *Lchild;
	struct TreeNode *Rchild;
} TreeNode, *P_TreeNode;

//������(ǰ�����������������:AB#D##C##) 
void createTree(P_TreeNode &T) {
	char data;
	scanf("%c", &data);
	if (data == '#') {
		T = NULL;
		return;
	}
	else {
		T = (P_TreeNode)malloc(sizeof(TreeNode));
		if (T == NULL) {
			printf("����ʧ�ܣ�\n");
			exit(-1);
		}
		T->data = data;
		createTree(T->Lchild);//�ݹ鴴�������� 
		createTree(T->Rchild);//�ݹ鴴�������� 
	}
}
//�������
void  preOrderTraversal(P_TreeNode T) {
	if (T == NULL) {
		return;
	}
	printf("%3c", T->data);
	preOrderTraversal(T->Lchild);
	preOrderTraversal(T->Rchild);
}
//�������
void  mediumOrderTraversal(P_TreeNode T) {
	if (T == NULL) {
		return;
	}
	mediumOrderTraversal(T->Lchild);
	printf("%3c", T->data);
	mediumOrderTraversal(T->Rchild);
}
//�������
void afterOrderTraversal(P_TreeNode T) {
	if (T == NULL) {
		return;
	}
	afterOrderTraversal(T->Lchild);
	afterOrderTraversal(T->Rchild);
	printf("%3c", T->data);
}

int main() {
	P_TreeNode T;
	createTree(T);
	printf("\n���������");
	preOrderTraversal(T);
	printf("\n���������");
	mediumOrderTraversal(T);
	printf("\n���������");
	afterOrderTraversal(T);
	printf("\n");
	return 0;
}