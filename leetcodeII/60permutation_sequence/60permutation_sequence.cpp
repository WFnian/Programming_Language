// 60permutation_sequence.cpp: 定义控制台应用程序的入口点。
//
/*
The set [1,2,3,…,n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order,
We get the following sequence (ie, for n = 3):

"123"
"132"
"213"
"231"
"312"
"321"
Given n and k, return the kth permutation sequence.
*/
#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
using namespace std;

class Solution {
public:
	string getPermutation(int n, int k) {
		string perm = "";
		for (size_t i = 1; i < n + 1; i++)
		{
			perm += i + 48;
		}
		cout << perm << endl;
		int ans = 1;
		while (next_permutation(perm.begin(), perm.end()))
		{
			ans++;
			if (ans == k)
				break;
		}
		cout << perm << endl;;
		return perm;
	}
};
int main() {//这几道题的解决思路都很依赖于标准库的next_permutation()
	Solution solution;
	solution.getPermutation(1, 1);

}
