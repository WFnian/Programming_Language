// 617merge_two_binary_trees.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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
	else
	{
		T = new TreeNode(a);
		CreatTree(T->left);
		CreatTree(T->right);
	}
	
}

void PreOrder(TreeNode *t) {
	if (t != NULL) {
		cout << t->val << " ";
		PreOrder(t->left);
		PreOrder(t->right);
	}
}
class Solution {
public:
	TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
		TreeNode *T = new TreeNode(0);
		if (t1 == NULL && t2 == NULL)
			T = NULL;
		else if (t1 == NULL || t2 == NULL) {
			if (t1 == NULL) {
				T->val = t2->val;
				T->left = mergeTrees(NULL, t2->left);
				T->right = mergeTrees(NULL, t2->right);
				// another solution :
				// return t2;
			}
			else {
				T->val = t1->val;
				T->left = mergeTrees(t1->left, NULL);
				T->right = mergeTrees(t1->right, NULL);
				// another solution :
				// return t1;
			}
		}
		else {
			T->val = t1->val + t2->val;
			
		T->left = mergeTrees(t1->left, t2->left);
		T->right = mergeTrees(t1->right, t2->right);
		}
		//1 3 5 -1 -1 -1 2 -1 -1 2 1 -1 4 -1 -1 3 -1 7 -1 -1
		return T;
	}
};

int main()
{
	TreeNode *t1,*t2;
	CreatTree(t1);
	CreatTree(t2);
	//PreOrder(t1);
	//PreOrder(t2);
	TreeNode *t = Solution().mergeTrees(t1, t2);
	PreOrder(t);
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
