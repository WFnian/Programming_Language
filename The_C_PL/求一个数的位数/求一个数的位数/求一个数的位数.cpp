// ��һ������λ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
void main()
{
	int x, sum = 0;
	scanf("%d", &x);
	while (x >= 1) {
		x = x / 10;
		sum++;
	}
	printf("%d\n", sum);
}
