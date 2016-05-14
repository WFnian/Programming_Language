// ջ�����Դ洢�ṹ.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include<stdio.h>
#include<stdlib.h> 
#define MAXSIZE 10 
typedef struct SqStack {
	int data[MAXSIZE];
	int top;
} SqStack;

//��ӡ
void printStack(SqStack S) {
	int i = 0;
	for (i = 0; i <= S.top; i++) {
		printf("%3d", S.data[i]);
	}
	printf("\n");
}
//��ʼ��ջ 
void initStatck(SqStack *S) {
	S->top = -1;
}
//���ջ 
void clearStack(SqStack *S) {
	S->top = -1;
}
//��ջ 
int pop(SqStack *S) {
	int elem;
	if (S->top == -1) {
		printf("error:��ջ��\n");
		exit(-1);
	}
	elem = S->data[S->top];
	S->top--;
	return elem;
}
//��ջ 
void push(SqStack *S, int elem) {
	if (S->top == MAXSIZE - 1) {
		printf("error:ջ������\n");
		exit(-1);
	}

	S->data[++S->top] = elem;
}
//��ȡջ�ĳ���
int stackLength(SqStack S) {
	return S.top + 1;
}

int main() {
	void printStack();//��ӡ 
	void initStatck(SqStack *); //��ʼ��ջ 
	void clearStack(SqStack *);//���ջ 
	int pop(SqStack *);//��ջ 
	void push(SqStack *, int);//��ջ 
	int stackLength(SqStack);

	SqStack S;
	int i = 0;
	initStatck(&S);
	printf("��ʼ���ɹ���\n");
	printf("��ʱջ�ĳ���Ϊ��%3d\n", S.top + 1);
	for (i = 0; i<5; i++) {
		push(&S, i + 1);
	}
	printStack(S);
	printf("��ʱջ�ĳ���Ϊ��%3d\n", S.top + 1);
	printf("��ջ��%3d\n", pop(&S));
	printStack(S);
	printf("��ջ��%3d\n", pop(&S));
	printStack(S);
	printf("��ʱջ�ĳ���Ϊ��%3d\n", S.top + 1);
	printf("���ջ��\n");
	clearStack(&S);
	printf("��ʱջ�ĳ���Ϊ��%3d\n", S.top + 1);
	pop(&S);
	return 0;
}