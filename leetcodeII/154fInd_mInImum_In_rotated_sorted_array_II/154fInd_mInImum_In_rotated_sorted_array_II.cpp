// 154fInd_mInImum_In_rotated_sorted_array_II.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
	int findMin(vector<int>& nums) {
		set<int>s(nums.begin(), nums.end());
		nums = vector<int>(s.begin(),s.end());
		if (nums.size() == 0)
			return 0;
		int i = 0;
		int j = nums.size() - 1;
		int mid;
		while (i < j)
		{
			mid = (i + j) / 2;
			if (nums[mid] >= nums[i])
				i = mid + 1;
			else
				j = mid;
			if (nums[mid] > nums[mid + 1])
				return nums[mid + 1];
		}
		return nums[0];
	}
};
/*

*/

int main()
{
	vector<int> nums{ 2,2,2,1 };
	cout << endl << Solution().findMin(nums) << endl;
	nums = { 10,1,10,10,10 };
	cout << endl << Solution().findMin(nums) << endl;


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
