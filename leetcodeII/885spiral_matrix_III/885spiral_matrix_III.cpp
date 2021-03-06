// 885spiral_matrix_III.cpp
#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;
// 具体题目详情见 https://leetcode.com/problems/spiral-matrix-iii/description/

class Solution {
public:
	//R 行------
	//C 列||||||
	//r0 c0 起始位置
	//eg:									R = 5, C = 6, r0 = 1, c0 = 4
	vector<vector<int>> spiralMatrixIII(int R, int C, int r0, int c0) {
		int distance = 1;//if distance == R*C ->break;
		vector<vector<int>> orders;//recode the order we visited.
		int pr0 = r0, pc0 = c0;
		orders.push_back(vector<int>({ pr0,pc0 }));
		int temp = 0;
		while (distance<R*C) {
			//四个循环，四个方向；
			//每进行两次转弯后会增加向前的路程。
			temp++;
			for (size_t i = 0; i < temp; i++)
			{
				pc0++;//右转
				if ((pc0<C&&pc0 >= 0) && (pr0<R&&pr0 >= 0))
				{
					orders.push_back(vector<int>({ pr0,pc0 }));
					distance++;
				}
			}
			for (size_t i = 0; i < temp; i++)
			{
				pr0++;//下转
				if ((pc0<C&&pc0 >= 0) && (pr0<R&&pr0 >= 0))
				{
					orders.push_back(vector<int>({ pr0,pc0 }));
					distance++;
				}
			}
			temp++;
			for (size_t i = 0; i < temp; i++)
			{
				pc0--;//左转
				if ((pc0<C&&pc0 >= 0) && (pr0<R&&pr0 >= 0))
				{
					orders.push_back(vector<int>({ pr0,pc0 }));
					distance++;
				}
			}
			for (size_t i = 0; i < temp; i++)
			{
				pr0--;//上转
				if ((pc0<C&&pc0 >= 0) && (pr0<R&&pr0 >= 0))
				{
					orders.push_back(vector<int>({ pr0,pc0 }));
					distance++;
				}
			}
		}
		return orders;
	}
};

int main()
{
	Solution s;
	vector<vector<int>> ans;
	ans = s.spiralMatrixIII(1, 4, 0, 0);
	ans = s.spiralMatrixIII(5, 6, 1, 4);
	return 0;
}


