#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
      float x1,x2,y1,y2,d;
      printf("�����һ����(x1,y1)������͵ڶ�����(x2,y2)������: ");
      scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
      d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
      printf("�����ľ�����%.2f",d);
      system("pause");


}
