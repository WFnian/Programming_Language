// OJ_LX�������жϺ���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

int prime(int *a) {
	int i;
	for (i = 2; i < *a; i++) {
		if (*a%i == 0) {
			return -1;
			break;
		}
		else return 1;
	}
}
int main()
{	
	int x;
	scanf_s("%d", &x);
	int b=prime(&x);
	if (b == -1) printf("not prime\n");
	else printf("prime\n");
    return 0;
}

