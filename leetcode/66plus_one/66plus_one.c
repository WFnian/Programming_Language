////////////////////////////////////////////////////////////
/* 66plus_one///��򵥵Ĵ������
*/
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>
//see my python solution,����û����
int* plusOne(int* digits, int digitsSize, int* returnSize) {//see my python solution,����û����
	int newdigits[10000] = {0,};//digitsSize+1
	int ans = 0,mod = 0;
	*returnSize = 0;
	newdigits[ans++] = (digits[digitsSize-1] + 1) % 10;
	for (size_t i = digitsSize - 1; i >= 0; i--) {
		

	}
	return 0;
}

int main()//see my python solution,����û����
{
	int a[10] = { 1,2,3 };
	int *list = plusOne(a,3,2);
}