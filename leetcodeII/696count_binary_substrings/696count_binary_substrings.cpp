// 696count_binary_substrings.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
We can convert the string s into an array groups that represents the length of same-character contiguous blocks within the string. For example, if s = "110001111000000", then groups = [2, 3, 4, 6].

For every binary string of the form '0' * k + '1' * k or '1' * k + '0' * k, the middle of this string must occur between two groups.

Let's try to count the number of valid binary strings between groups[i] and groups[i+1]. If we have groups[i] = 2, groups[i+1] = 3, then it represents either "00111" or "11000". We clearly can make min(groups[i], groups[i+1]) valid binary strings within this string. Because the binary digits to the left or right of this string must change at the boundary, our answer can never be larger.

Algorithm

Let's create groups as defined above. The first element of s belongs in it's own group. From then on, each element either doesn't match the previous element, so that it starts a new group of size 1; or it does match, so that the size of the most recent group increases by 1.

Afterwards, we will take the sum of min(groups[i-1], groups[i]).
*/

class Solution {
public:
	int countBinarySubstrings(string s) {
		vector<int> group;//00110011 110001111000000 2 3 4 6
		int ans = 1;
		for (size_t i = 1; i < s.size(); i++)
		{
			if (s[i] == s[i - 1])
				ans++;
			else
			{
				group.push_back(ans);
				ans = 1;
			}
		}
		group.push_back(ans);
		/*for each (int var in group)
		{
			cout << var << endl;
		}*/
		int sum = 0;
		for (size_t i = 0; i < group.size()-1; i++)
		{
			sum += (group[i] > group[i + 1] ? group[i + 1] : group[i]);
		}
		return sum;
	}
};

int main()
{
	Solution s = Solution();
	cout << s.countBinarySubstrings("00110011") << endl;;
	cout << s.countBinarySubstrings("10101");
    return 0;
}

