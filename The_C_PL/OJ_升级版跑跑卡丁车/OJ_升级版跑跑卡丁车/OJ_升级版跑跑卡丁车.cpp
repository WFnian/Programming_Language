// OJ_���������ܿ�����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"



#include<stdio.h>
int main() {
	int a, b, c, d, num = 0, n;
	scanf_s("%d:%d", &a, &b);
	scanf_s("%d:%d %d", &c, &d, &n);
	num = c * 60 + d - (a * 60 + b) + n * 20;
	printf("%d", num);

	return 0;

}


