#include<stdio.h>
main()
{
int a,b,c;
scanf("%d,%d,%d",&a,&b,&c);
//if((a+b)>c&&(a-b)<c)
//{
if(a==b||b==c||c==a)
printf("���Ǹ�����������\n");
else 
printf("���������Σ������ǵ���������\n");
//}
//else
//printf("�������߲��ܹ���������\n");
}
