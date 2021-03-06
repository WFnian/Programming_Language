/*
258. Add Digits
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
For example:
Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
Follow up:
Could you do it without any loop/recursion in O(1) runtime?
给出一个非负整数num，反复添加其所有数字，直到结果只有一个数字。
如：
定num = 38，这个过程是这样的：3 + 8 = 11，1 + 1 = 2。由于2只有一个数字，将其返回。
追问：
你能做到这一点，而不在O（1）运行时的循环/递归？
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
	if (a >= 10)
		return kkk(a);
	return a;
}
int recur(n) {
	return (n / 10>0) ? recur(n / 10) + n % 10 : n % 10;
}

int addDigits(int num) {
	int tmp = num;
	while (tmp / 10) {
		tmp = recur(tmp);
	}
	return tmp;
}
int main()
{
	int num;
	while (scanf("%d", &num)!=EOF) {
		if (num == 0)
			break;
		if (num < 10) {
			printf("%d\n", num);
		}
		else
		{
			int b = addDigits(num);
			printf("%d\n", b);
		}
	}
	return 0;
}


/*//附上通不过的python代码
def Segmentation(num):
	if len(str(num)) == 1:
		return int(num)
	else :
		num = list(str(num))
		sum = 0
		for i in num:
			sum+=int(i)
		return Segmentation(sum)
while True:
	num = int(input())
	if num == 0:
		break
	print(Segmentation(num))
*/