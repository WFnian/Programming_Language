// OJ_LX3�ſε���ƽ���ɼ�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<stdio.h>
#define NUM 22
typedef struct Stu {
	char Sn;
	char Sname[NUM];
	int a, b, c;
}stuu;
int main()
{
	int N, i;
	int A = 0, B = 0, C = 0, sum = 0;
	stuu s[NUM];
	scanf_s("%d", &N);
	for (i = 0; i < N; i++) {
		scanf_s("%c%d%d%d", &s[i].Sn, &s[i].a, &s[i].b, &s[i].c);
	}
	//for (i = 0; i < N; i++) {
	//	A += s[i].a;
	//	B += s[i].b;
	//	C += s[i].c;
	//}
	////A = A / N;
	////B = B / N;
	////C = C / N;
	//printf("%d ", A);
	//printf("%d ", B);
	//printf("%d", C);
	//for (i = 0; i < N; i++) {
	//	;
	//}
    return 0;
}

