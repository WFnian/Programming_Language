#include<stdio.h>

int main()
{
int x,y,z,m;
printf("������һ��������λ��������");
scanf("%d",&m);
x=m/100;
y=m/10-10*x;
z=m%10;
printf("��λ��%d\n",x);
printf("ʮλ��%d\n",y);
printf("��λ��%d\n",z);
}
