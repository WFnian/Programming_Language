// 441arranging_coins.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
/*
o			1
o o			3
o o o		6
o o o o		10
o o o o o	15


*/
class Solution {
public:
	int arrangeCoins(int n) {
		long sum1{ 0 };
		// n*(n+1)/2 = 5;
		//2*n
		for (size_t i = 1; ; i++)
		{
			sum1 += i;cout << sum1 << " " << i - 1 << endl;
			if (sum1 > n)
			{
				
				return i-1;
				break;
			}
			
		}
		return 0;
	}
	/*
	int arrangeCoins(int n) {
		int sum((int)sqrt(2 * n));
		cout <<"ds"<< ans(sum ) << "fdsa";
		if (ans(sum - 1) >= n&&ans(sum) < n)
		{
			cout << sum - 1 << endl;
		}
		else cout << sum;
		return 0;
	}
	int ans(int m) {
		return m*(m + 1) / 2;
	}
	*/
};

int main()
{
	Solution s;
	s.arrangeCoins(21);
	s.arrangeCoins(8);
    return 0;
}

