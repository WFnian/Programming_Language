// 20valid_parentheses.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Solution {
public:
	bool isValid(string s) {
		vector<char> ans1;
		vector<char> ans2;
		for (size_t i = 0; i < s.length(); i++)
			ans1.push_back(s[s.length() - i - 1]);
		if (ans1.size() % 2 != 0 || ans1.size() == 0) return false;
		ans2.push_back(ans1.at(ans1.size() - 1));
		ans1.pop_back();
		while (true)
		{
			if (ans2.size() != 0 && ((ans1.at(ans1.size() - 1) == ')'&&ans2.at(ans2.size() - 1) == '(')
				|| (ans1.at(ans1.size() - 1) == ']'&&ans2.at(ans2.size() - 1) == '[')
				|| (ans1.at(ans1.size() - 1) == '}'&&ans2.at(ans2.size() - 1) == '{'))) {
				ans1.pop_back();
				ans2.pop_back();
			}
			else
			{
				ans2.push_back(ans1.at(ans1.size() - 1));
				ans1.pop_back();
			}
			if (ans1.size() == 0)
				break;
		}
		if (ans1.size() == ans2.size() && ans1.size() == 0)
			return true;
		return false;
	}
};

int main()
{
	string s = "";// # {} #{{}}() #{}]
	Solution sol;
	cout << ((sol.isValid(s) == true) ? "true" : "false") << endl;
	return 0;
}

