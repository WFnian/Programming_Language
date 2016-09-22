/*
258. Add Digits
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
For example:
Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
Follow up:
Could you do it without any loop/recursion in O(1) runtime?
����һ���Ǹ�����num������������������֣�ֱ�����ֻ��һ�����֡�
�磺
��num = 38����������������ģ�3 + 8 = 11��1 + 1 = 2������2ֻ��һ�����֣����䷵�ء�
׷�ʣ�
����������һ�㣬������O��1������ʱ��ѭ��/�ݹ飿
*/

#include <stdio.h>
int kkk(int sum) {
	int a = 0;
	int num = sum;
	while (1)
	{
		sum = num % 10;
		num /= 10;
		a = a + sum;
		if (num <= 0)
			break;
	}
	if (a > 10)
		return kkk(a);
	return a;
}
int main()
{
	int num;
	int a = 0;
	scanf("%d", &num);
	int sum;
	sum = num;
	int b = kkk(sum);
	printf("%d\n", b);
}