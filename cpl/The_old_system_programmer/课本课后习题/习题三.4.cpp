#include<stdio.h>
//#include<sttdlib.h>
int main()
{
    char a;
    printf("����");
    scanf("%c",&a);
       if(a>='A'&&a<='Z') 
         printf("�Ǵ�д��ĸ");
       else
      {
          if(a>='a'&&a<='z')
             printf("��Сд��ĸ");
          else
          {
              printf("������");
          }
          } 
  //  system("pause");
  return 0;
}
