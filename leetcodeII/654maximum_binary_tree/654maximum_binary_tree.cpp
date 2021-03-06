// 654maximum_binary_tree.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
#include <queue>
#include <vector>

using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};
class m_tree {//此类不属于题目，程序化建树，方便调试

public:
	void creatTree(TreeNode *&t) {
		int a;
		cin >> a;
		if (a == -1)
			t = NULL;
		else
		{
			t = new TreeNode(a);
			creatTree(t->left);
			creatTree(t->right);
		}
	}
	void preOrder(TreeNode *&t) {
		if (t != NULL)
		{
			cout << t->val << " ";
			preOrder(t->left);
			preOrder(t->right);

		}
	}

};

/*
Given an integer array with no duplicates. A maximum tree building
on this array is defined as follow:

The root is the maximum number in the array.
The left subtree is the maximum tree constructed from left part
subarray divided by the maximum number.
The right subtree is the maximum tree constructed from right part
subarray divided by the maximum number.
Construct the maximum tree by the given array and output the root node of this tree.
*/
class Solution {
public:
	TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
		TreeNode *T;
		creatTree(T, nums);
		return T;
	}
	void creatTree(TreeNode *&t, vector<int>nums) {
		if (nums.size() == 0)
			t = NULL;
		else {
			int m_max(nums[0]);
			int index(0);
			for (int i(0); i < nums.size(); i++)
				if (nums[i] > m_max) {
					m_max = nums[i];
					index = i;
				}
			t = new TreeNode(m_max);
			creatTree(t->left, vector<int>(nums.begin(), nums.begin() + index));
			creatTree(t->right, vector<int>(nums.begin() + index + 1, nums.end()));
		}
	}
};

int main()
{

	vector<int>nums{ 3,2,1,6,0,5 };
	TreeNode *t = Solution().constructMaximumBinaryTree(nums);
	m_tree().preOrder(t);
	std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
