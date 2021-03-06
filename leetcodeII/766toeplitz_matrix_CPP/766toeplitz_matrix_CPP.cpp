// 766toeplitz_matrix_CPP.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
	bool isToeplitzMatrix(vector<vector<int>>& matrix) {
		for (int i = 0; i < matrix.size() - 1; i++)
			for (int j = 0; j < matrix[0].size() - 1; j++)
				if (matrix[i][j] != matrix[i + 1][j + 1])
					return false;
		
		return true;
	}
};
class Solution2 {
public:
	bool isToeplitzMatrix(vector<vector<int>>& matrix) {
		// another Efficiently Solution:
		// 前一行删除了 行尾 的数组和本行删除了 行首 的数组是否相同。
		vector<int> pre, now;
		for (int i = 1; i < matrix.size(); ++i) {
			pre = matrix[i - 1];
			pre.pop_back();
			now = matrix[i];
			now.erase(now.begin());//删除行首
			/*
			iterator erase (iterator position);
			iterator erase (iterator first, iterator last);
			*/
			if (pre != now) {
				return false;
			}
		}
		return true;
	}
};
int main()
{
	vector<vector<int>> m = { {1,2,3,4 },
	{5,1,2,3 },
	{9,5,1,2 } };
	cout << Solution().isToeplitzMatrix(m);
	std::cout << "Hello World!\n";
}