#include <stdio.h>
#define PI 3.14159
int main()
{
	float r, V, S;
	printf("��������뾶:");
	scanf("%f", &r);
	V = PI * 4 * r*r*r / 3;
	S = PI * 4 * r*r;
	printf("�������Ϊ%f", V);
	printf("��������Ϊ%f", S);
}
