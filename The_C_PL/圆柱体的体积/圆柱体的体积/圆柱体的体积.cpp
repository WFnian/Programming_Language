// Բ��������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<stdio.h>

int main()

{

	double pi = 3.1415926;

	double r, h, S, V;

	scanf_s("%lf,%lf", &r, &h);      /*��������Բ�뾶r�͸߶�h*/

	S =pi*r*r;                        /*����Բ���S��ֵ*/

	V = S*h;                    /*����Բ�������V��ֵ*/

	printf("S=%lf\n", S);

	printf("V=%lf\n", V);

		return 0;

}
