// 3longest_substring_without_repeating_characters.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <array>
#include <vector>
#include <numeric>
#include <set>

using namespace std;
class Solution {
public:
	int lengthOfLongestSubstring1(string s) {//Time Limit ERROR
		int maxl = 0;
		for (size_t i = 0; i < s.size(); i++)
		{
			for (size_t j = s.size(); j >i; j--)
			{
				set<int> ans(s.begin() + i, s.begin() + j);
				if (ans.size() == j - i)
					if (ans.size() > maxl)
						maxl = ans.size();
			}
		}
		cout << maxl;
		return maxl;
	}

	int lengthOfLongestSubstring(string s) {//hard to understand...
		int local[256] = { 0 };
		int start = -1, end = 0;
		int ret(0);
		for (end = 0; end < s.length(); end++)
		{
			if (local[s[end]] > start)
			{
				start = local[s[end]];
			}

			local[s[end]] = end;
			ret = std::max(ret, end - start);
		}
		return ret;
	}
};

int main() {
	string s = "abcdae";
	Solution S;
	cout<<S.lengthOfLongestSubstring(s);
	return 0;
}
