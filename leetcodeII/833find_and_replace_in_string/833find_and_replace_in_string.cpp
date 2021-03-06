// 833find_and_replace_in_string.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

/*//////////////////////////////////////////////////////////////////////////
For example, if we have S = "abcd" and we have some replacement operation 
i = 2, x = "cd", y = "ffff", then because "cd" starts at position 2 in 
the original string S, we will replace it with "ffff".

//////////////////////////////////////////////////////////////////////////*/
using namespace std;
/*//////////////////////////////////////////////////////////////////////////
S = "abcd", indexes = [0,2], sources = ["a","cd"], targets = ["eee","ffff"]

"vmokgggqzp"
[3,5,1]
sources: ["kg","ggq","mo"]
targets: ["s","so","bfr"]
"vbfrssozp"
"vmokgggqzp"
////////////////////////////////////////////////////////////////////////////*/
class Solution {
public:
	string findReplaceString(string S, vector<int>& indexes, vector<string>& sources, vector<string>& targets) {
		string ans = S;
		int i = 0;
		while (i<indexes.size())
		{
			if (ans.substr(indexes[i], sources[i].size()) == sources[i])
			{
				ans.replace(indexes[i], sources[i].size(), targets[i]);
				for (size_t j = i; j < indexes.size(); j++)
				{
					if (sources[i].size() < targets[i].size()) {//如果原长变大
						if (indexes[j] > indexes[i])
							indexes[j] = indexes[j] + (targets[i].size() - sources[i].size());//***********很重要的一行
					}
					else if (sources[i].size() > targets[i].size()) {
						if (indexes[j] > indexes[i])
							indexes[j] = indexes[j] - (sources[i].size() - targets[i].size());//***********很重要的一行
					}

				}

			}
			i++;
		}
		cout << endl << ans << endl;
		//cout << "vbfrssozp" << endl;
		//cout << (ans == "vbfrssozp" ? " == " : " != ") << endl;
		return ans;
	}
};

int main()
{
	/*
	Solution sol;
	vector<int>indexs({ 3,5,1 });
	vector<string>sources({ "kg","ggq","mo" });
	vector<string>targets({ "s","so","bfr" });
	sol.findReplaceString("vmokgggqzp", indexs, sources, targets);
	*/


	Solution sol;
	vector<int>indexs({ 0,2 });
	vector<string>sources({ "a", "cd" });
	vector<string>targets({ "eee", "ffff" });
	sol.findReplaceString("abcd", indexs, sources, targets);


	return 0;
}


