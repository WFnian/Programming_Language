//from wikipedia �ٿ� �ⷨһ��

#include<stdio.h>
int hamming_distance(unsigned x, unsigned y) //�ⷨһ
{
	return __builtin_popcount(x ^ y);
}
//if your compiler supports 64-bit integers
int hamming_distance(unsigned x, unsigned y){  //�ⷨ��
	int dist = 0;
	unsigned  val = x ^ y;

	// Count the number of bits set
	while (val != 0)
	{
		// A bit is set, so increment the count and clear the bit
		dist++;
		val &= val - 1;
	}

	// Return the number of differing bits
	return dist;
}

int main(void) {
	printf("%d\n", hamming_distance(1, 4));

	return 0;
}