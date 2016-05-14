#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define OK 0
#define ERROR -1
typedef int Status;
typedef int DataType;

/*typedef struct {
	DataType data[MAXSIZE];
	int top;
}Sqstack;

Status InitSqstact(Sqstack*S) {
	if (S->top == MAXSIZE - 1) {
		return ERROR;
	}
	S->top = -1;
	return OK;
}

Status Push(Sqstack*S, DataType e) {
	if (S->top == MAXSIZE - 1)
		return ERROR;
	S->data[++S->top] = e;
	printf("%d ", e);
	return OK;
}

Status Pop(Sqstack*S, DataType e) {
	if (S->top == -1)
		return ERROR;
	e = S->data[S->top];
	
	S->top--;
	return OK;
}

/*Status PrintStack(Sqstack *S){
	int i;
	for (i = 0; i <= S->top; i++) {
		printf("%d ", S->data[i]);
	}
	printf("\n");
	return OK;
}


int main() {
	Sqstack S;
	InitSqstact(&S);
	int i = 0, j = 0;
	char str[MAXSIZE];
	while (gets_s(str) != NULL) {
		for (i = 0,j = 1; str[i] != NULL; i++) {
			switch (str[i]) {
			case '(': {
				Push(&S, j);
				j++;
			}break;
			case ')': {
				//j--;
				Pop(&S, j + 1);
			}break;
			default:break;
			}
		}
		printf("\n");
	}
}
/*
(())
((()(())))
*/
int main() {
	int i, j;
	int rp, lp;
	char str[MAXSIZE];
	while (gets_s(str) != NULL) {
		// ......
		// get the seqence to an array named str
		for (i = 0; str[i] != NULL; ++i) {
			if (str[i] == '(')	// ����������ţ��ͼ���
				continue;
			rp = 1; 	// ��¼�����ŵĸ���
			lp = 0;		// ��¼�����ŵĸ���
			for (j = i - 1; j >= 0; j--) { //�ҵ�һ�������ţ�Ȼ����ǰ�����������Ӧ��������
				if (str[j] == '(')
					lp += 1;
				else
					rp += 1;
				if (lp == rp) {
					// ��������������������ȣ��ҵ��˶�Ӧ�������ţ���������������������Ÿ���
					printf("%d ", rp);
					break;
				}
			}
		}
		printf("\n");
	}
}