// 744find_smallest_letter_greater_than_target.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
	char nextGreatestLetter(vector<char>& letters, char target) {
		set<char> let(letters.begin(), letters.end());
		vector<char> _letters(let.begin(), let.end());
		if (target >= _letters[_letters.size() - 1] || target<_letters[0])
			return _letters[0];
		for (size_t i(0); i<_letters.size() - 1; i++)
			if (_letters[i] == target || _letters[i]<target&&target<_letters[i + 1])
				return _letters[i + 1];
		return '@';
	}
};
int main(void) {
	Solution s;
	vector<char>ch{ 'e','e','e' ,'e','e','e','n','n','n','n' };
	cout << s.nextGreatestLetter(ch, 'e') << endl;
}
/*
Input:
letters = ["c", "f", "j"]
target = "a"
Output: "c"

Input:
letters = ["c", "f", "j"]
target = "c"
Output: "f"

Input:
letters = ["c", "f", "j"]
target = "d"
Output: "f"

Input:
letters = ["c", "f", "j"]
target = "g"
Output: "j"

Input:
letters = ["c", "f", "j"]
target = "j"
Output: "c"

Input:
letters = ["c", "f", "j"]
target = "k"
Output: "c"
*/