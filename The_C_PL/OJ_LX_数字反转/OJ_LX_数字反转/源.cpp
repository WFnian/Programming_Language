//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	/*int n, a, b, c;
//	scanf("%d", &n);*/
//	char s[22];
//	int i, m;
//	gets_s(s);
//	m = strlen(s);
//	for (i = m - 1; i >= 0; i--) {
//		printf("%c", s[i]);
//	}
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);//����Ҫ��ת������ 
	int result = 0;//���淭ת��Ľ��
	while (1)//while(true)Ҳ���� 
	{
		int i = n % 10;//ÿ�ζ��ǵõ����λ�ϵ�����
		result = result * 10 + i;
		n = n / 10;//�ݹ齵λ
		if (n == 0)
		{
			break;
		}
	}
	printf("%d\n", result);
}