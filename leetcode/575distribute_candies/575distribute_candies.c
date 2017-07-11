///////////////////////////////////////////////////////////////////
/*
We can use a set to count all unique kinds of candies, but even all 
candies are unique, the sister cannot get more than half.
���ڳ�����2n�����飬���ÿ��Ի��n���ǹ�������ǹ�����mС��n ��
�����Ȼ�ܻ��m���ǹ������m���ڵ���n�������������m���ǹ���ѡ��n�ֻ�á�
�������������Ի��min��m��n�����ǹ���
*/
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool isInCandies(int* candies, int candiesSize,int target) {
	for (size_t i = 0; i < candiesSize; i++) 
		if (target == candies[i])
			return true;
	return false;
}

int distributeCandies(int* candies, int candiesSize) {
	int array[2000],kinds = 0;
	for (size_t i = 0; i < candiesSize; i++) 
		if (!isInCandies(array, kinds, candies[i]))
			array[kinds++] = candies[i];
	return kinds < candiesSize / 2 ? kinds : candiesSize / 2;
}

int main() {
	int nums[10] = { 1,1,1,1 };
	printf("%d\n", distributeCandies(nums, 4));
}