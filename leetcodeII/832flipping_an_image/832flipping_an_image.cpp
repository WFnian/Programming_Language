// 832flipping_an_image.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
/*Given a binary matrix A, we want to flip the image horizontally, then invert it, and return the resulting image.

To flip an image horizontally means that each row of the image is reversed.  For example, flipping [1, 1, 0] horizontally results in [0, 1, 1].

To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0. For example, inverting [0, 1, 1] results in [1, 0, 0].*/

using namespace std;

class Solution {
public:
	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
		vector<vector<int>> B;
		for (size_t i = 0; i < A.size(); i++)
			for (size_t j = 0; j < A[0].size(); j++) {
				if (A[i][j] == 0)	A[i][j] = 1;
				else A[i][j] = 0;
			}
		for (auto ans : A) {
			reverse(ans.begin(), ans.end());
			B.push_back(ans);
		}
		return B;
	}
};

int main()
{
	vector<int>s = { 1,2,3,4 };
	reverse(s.begin(), s.end());
	for (auto a : s) {
		cout << a;
	}

	return 0;
}
