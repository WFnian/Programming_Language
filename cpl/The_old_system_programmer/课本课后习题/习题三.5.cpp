#include<stdio.h>
int main()
{int a;
printf("����һ��������");
scanf("%d",&a);
if(a%3==0 && a%5==0 && a%7==0)
  printf("ͬʱ�ܱ�����������\n");
else if(a%3 && a%5==0 && a%7==0)
printf("�����ܱ�5��7���� \n");
else if(a%3==0 && a%5&& a%7==0)
printf("�����ܱ�����3��7���� \n");
else if(a%3==0 && a%5==0 && a%7)
printf("�����ܱ�����3��5���� \n");
else if(a%3==0 && a%5 && a%7)
printf("�����ܱ�һ��3���� \n");
else if(a%3 && a%5==0 && a%7)
printf("�����ܱ�һ��5���� \n");
else if(a%3 && a%5 && a%7==0)
printf("�����ܱ�һ��7���� \n");
else printf("���ܱ�3��5��7��һ������ \n");}
