#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define stack_init_size 100
#define stackincrement 10
typedef int Status;
typedef struct aaa{
	int *base;
	int *top;
	int stacksize;
	struct aaa*next;
}SqStack;
void InitStack(SqStack S){
	S.base = (int *)malloc(stack_init_size*sizeof(int));
	if (!S.base)printf("overflow");
	S.top = S.base;
	S.stacksize = stack_init_size;
}
int ClearStack(SqStack *S)
{
	SqStack p, q;
	p.top= S->top;
	while (p.next)
	{
		q = p;
		p.next = q.next;
		free(&q);
	}
	S->base = 0;
	return 0;
}
void LineEdit() {//�㷨3.2
	//�����ַ�ջS,���ն˽���һ�в����������ù��̵�������
	char ch, temp;
	SqStack s;
	InitStack(s);//�����ջS
	ch = getchar();//���ն˽��յ�һ���ַ�
	while (ch != EOF) {//EOFΪȫ�Ľ�����
		while (ch != EOF&&ch != '\n') {
			switch (ch) {
			//case'#': Pop(S, ch); break;//����ջ�ǿ�ʱ��ջ��δ����ջ�����
			case'@':ClearStack(&s); break;//����SΪ��ջ
			//default:Push(S, ch); break;//��Ч�ַ���ջ��δ����ջ�����
			}
			ch = getchar();//���ն˽�����һ���ַ�
		}
	//	temp = s->base;
	//	while (*temp != s.top) {
			printf("%c", temp);
			++temp;
		//}
	//	ClearStack(s);//����SΪ��ջ
		printf("\n");
		if (ch != EOF) {
			ch = getchar();
		}
	}
	//DestoryStack(s);
}
void main(){
	LineEdit();
}