// 859.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

class Solution {
	/*
	1�����Ȳ���ȵ������ַ���һ������������������
	2��������ȫ��ȵ��ַ�����ֻҪ����ַ�������ͬ���ַ����Ϳ�������������
	3����������������ȵ��ַ�������¼�����ַ�����ȵ�����λ�á��������ȵ��ַ���
	����Ϊ2������  ���㽻����ȣ����������ַ����������������ġ�
	*/
public:
	bool buddyStrings(string A, string B) {
		if (A.length() != B.length())
			return false;
		if (A == B)
			return (set<char>(A.begin(), A.end()).size() < A.size());
		vector<int> pos;
		for (size_t i = 0; i < A.length(); i++)
		{
			if (A[i] != B[i])
				pos.push_back(i);
			if (pos.size() == 3)
				break;
		}
		return (pos.size() == 2 && A[pos[0]] == B[pos[1]] && A[pos[1]] == B[pos[0]]);

	}
};

int main()
{
	Solution s;
	cout << s.buddyStrings("ab", "ba") << endl;
	cout << s.buddyStrings("aa", "aa") << endl;
	cout << s.buddyStrings("ab", "ab") << endl;
	return 0;
}

