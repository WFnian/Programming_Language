/*#include<stdio.h>
int main()
{
	float a,b,c;
	scanf("������abc",&a,&b,&c);
	printf("��λ������%f\n",a);
	printf("ʮλ������%f\n",b);
	printf("��λ������%f\n",c);
	
}*/
#include <stdio.h>
main()
{
int n,a,b,c;
scanf("%d",&n);
a = n/ 100;
b = (n-a*100)/10;
c = n % 10;
printf("%d�ĸ�λ�ֱ���%d��%d��%d�����Ϊ%d\n",n,a,b,c,a+b+c);
}
