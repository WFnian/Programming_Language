/**
 * ����һ���������ķ�ת�Ľ������������1234�����4321
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m, n, result = 0;
	scanf("%d", &n);
	
	while (n) {
		m = n % 10;					//ÿ�ζ��ǵõ����λ�ϵ�����
		result = result * 10 + m;
		n = n / 10;					//�ݹ齵λ
	}
	
	printf("%d\n", result);
	
	return 0;
}