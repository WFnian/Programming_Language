/*
��Ŀ����
���еĻ�����ϵΪ��1��2��5��10��20��50��100����������㷨������Ҫ�����ٵĻ�����֧��ָ�����N��ÿ�ֻ�����Ҫʹ�õ�������

����
��һ��Ϊ������������n��n��1000�� ����n�У�ÿ��Ϊһ������������ÿ����������Ϊһ������0������Ŀ����m��0��m��10000��

���
��ÿ���������������һ���ɿո�����7���������ֱ��ʾ1Ԫ��2Ԫ��5Ԫ��10Ԫ��20Ԫ��50Ԫ��100Ԫ��ʹ�õ�������

��������
2
15
189
�������
0 0 1 1 0 0 0
0 2 1 1 1 1 1
*/

#include<stdio.h>

int judge(int money, int a, int b, int c, int d, int e, int f, int g ) {
		if (money < 2) {
			a = money / 1;
			money = 0;
		}
		else if (money < 5) {
			b = money / 2;
			money = money - b * 2;
			judge(money, a, b, c, d, e, f, g); 
		}
		else if (money < 10) {
			c = money / 5;
			money = money - c*5;
			judge(money, a, b, c, d, e, f, g); 
		}
		else if (money < 20) {
			d = money / 10;
			money = money - 10*d;
			judge(money, a, b, c, d, e, f, g);
		}
		else if (money < 50) {
			e = money / 20;
			money = money - 20 * e;
			judge(money, a, b, c, d, e, f, g); 
		}
		else if (money < 100) {
			f = money / 50;
			money = money - 50;
			judge(money, a, b, c, d, e, f, g); 
		}
		else if (money >= 100) {
			g = money / 100;
			money = money - g * 100;
			judge(money, a, b, c, d, e, f, g);
		}
		if (money == 0)
		{
			return a, b, c, d, e, f, g;
		}
}

int main() {
	int sum;
	int money;
	scanf("%d", &sum);
	for (int i = 0; i < sum; i++) {
		int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;
		scanf("%d", &money);
		a = judge(money, a, b, c, d, e, f, g);
		b = judge(money, a, b, c, d, e, f, g);
		c = judge(money, a, b, c, d, e, f, g);
		d = judge(money, a, b, c, d, e, f, g);
		e = judge(money, a, b, c, d, e, f, g);
		f = judge(money, a, b, c, d, e, f, g);
		g = judge(money, a, b, c, d, e, f, g);
//		a = judge(money, a, b, c, d, e, f, g);
		printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);
	}
	
}