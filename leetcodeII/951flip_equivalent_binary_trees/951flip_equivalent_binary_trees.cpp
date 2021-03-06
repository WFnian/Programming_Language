// 951flip_equivalent_binary_trees.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};

void CreatTree(TreeNode *&T) {
	int a;
	cin >> a;
	if (a == -1)
		T = NULL;
	else {
		T = new TreeNode(a);
		CreatTree(T->left);
		CreatTree(T->right);
	}
}

void PreOrder(TreeNode *T) {
	if (T!=NULL)
	{
		cout << T->val << " ";
		PreOrder(T->left);
		PreOrder(T->right);
	}
}
void turnOver(TreeNode *&T) {
	if (T==NULL)
	{
		;
	}
	else
	{
		TreeNode *temp;
		temp = T->left;
		T->left = T->right;
		T->right = temp;
		turnOver(T->left);
		turnOver(T->right);
	}
}

bool isSameTree(TreeNode *T1, TreeNode *T2) {
	if (T1==NULL&&T2==NULL)
	{
		return true;
	}
	if (T1==NULL||T2==NULL)
	{
		return false;
	}
	if (T1->val!=T2->val)
	{
		return false;
	}

	return isSameTree(T1->left, T2->left) && isSameTree(T1->right, T2->right);
}

class Solution {
public:
	bool flipEquiv(TreeNode* root1, TreeNode* root2) {
		turnOver(root1);
		return isSameTree(root1, root2);
	}
};
int main()
{
	TreeNode *T1,*T2;
	CreatTree(T1);
	PreOrder(T1);
	CreatTree(T2);
	//PreOrder(T2);
	cout << Solution().flipEquiv(T1, T2);
	PreOrder(T1);
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
