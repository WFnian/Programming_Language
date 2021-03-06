// 717a-bit_and_2-bit_characters.cpp: 
#include "stdafx.h"
#include <iostream>
#include <vector>
/*
从看题开始，每个character由0，或者由10、11组成，
bits里面有多个character。判断最后一个character是否由一位的0组成。
*/
using namespace std;

class Solution {
public:
	bool isOneBitCharacter(vector<int>& bits) {//由0，或者由10、11组成
		size_t i = 0;
		for (; i < bits.size() - 1;)
		{
			if (bits[i] == 0)i++;
			else i += 2;
		}
		return i != bits.size();
	}
};
int main()
{
	Solution solution;
	vector<int> a{ 0,0,0 };
	cout << solution.isOneBitCharacter(a) << endl;

	vector<int> b{ 1,1,1,0 };
	cout << solution.isOneBitCharacter(b) << endl;
	return 0;
}


