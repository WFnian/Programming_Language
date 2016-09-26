/*
题目描述
现行的货币体系为（1、2、5、10、20、50、100），请设计算法，计算要用最少的货币数支付指定金额N，每种货币需要使用的数量。

输入
第一行为测试用例个数n，n≤1000。 后面n行，每行为一个测试用例，每个测试用例为一个大于0的整数目标金额m，0≤m≤10000。

输出
对每个测试用例，输出一行由空格间隔的7个整数，分别表示1元、2元、5元、10元、20元、50元、100元所使用的数量。

样例输入
2
15
189
样例输出
0 0 1 1 0 0 0
0 2 1 1 1 1 1
*/

#include<stdio.h>

//int judge(int money, int a, int b, int c, int d, int e, int f, int g ) {
//		if (money < 2) {
//			a = money / 1;
//			money = 0;
//		}
//		else if (money < 5) {
//			b = money / 2;
//			money = money - b * 2;
//			judge(money, a, b, c, d, e, f, g); 
//		}
//		else if (money < 10) {
//			c = money / 5;
//			money = money - c*5;
//			judge(money, a, b, c, d, e, f, g); 
//		}
//		else if (money < 20) {
//			d = money / 10;
//<<<<<<< HEAD
//			money = money - 10*d;
//=======
//			money = money - 10;
//>>>>>>> f3343ddfdbf0969b811966a9d5d37427f264a6f0
//			judge(money, a, b, c, d, e, f, g);
//		}
//		else if (money < 50) {
//			e = money / 20;
//			money = money - 20 * e;
//			judge(money, a, b, c, d, e, f, g); 
//		}
//		else if (money < 100) {
//			f = money / 50;
//			money = money - 50;
//			judge(money, a, b, c, d, e, f, g); 
//		}
//		else if (money >= 100) {
//			g = money / 100;
//			money = money - g * 100;
//			judge(money, a, b, c, d, e, f, g);
//		}
//<<<<<<< HEAD
//		if (money == 0)
//		{
//			return a, b, c, d, e, f, g;
//		}
//=======
//	if (money == 0)
//		printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);
//	return 0;
//>>>>>>> f3343ddfdbf0969b811966a9d5d37427f264a6f0
//}
//
//int main() {
//	int sum;
//	int money;
//	scanf("%d", &sum);
//	for (int i = 0; i < sum; i++) {
//		int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;
//		scanf("%d", &money);
//		a = judge(money, a, b, c, d, e, f, g);
//		b = judge(money, a, b, c, d, e, f, g);
//		c = judge(money, a, b, c, d, e, f, g);
//		d = judge(money, a, b, c, d, e, f, g);
//		e = judge(money, a, b, c, d, e, f, g);
//		f = judge(money, a, b, c, d, e, f, g);
//		g = judge(money, a, b, c, d, e, f, g);
////		a = judge(money, a, b, c, d, e, f, g);
//		printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);
//	}
//	
//}
void judge(int money,unsigned *result)
{
	result[6] = money / 100;
	money = money % 100;
	result[5] = money / 50;
	money = money % 50;
	result[4] = money / 20;
	money = money % 20;
	result[3] = money / 10;
	money = money % 10;
	result[2] = money / 5;
	money = money % 5;
	result[1] = money / 2;
	money = money % 2;
	result[0] = money / 1;
	money = money % 1;
	
}
int main() {
	unsigned result[7];
	int money, n, j=0;
	scanf("%d", &n);
	while (j<n) {
		scanf("%d", &money);
		judge(money, result);
		for (int i = 0; i < 7; i++) {
			printf("%d ", result[i]);
		}
		printf("\n");
		j++;
	}
}
