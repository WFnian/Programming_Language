#include"stdio.h"
int main(){
	int m;
	printf("��������Ҫ��֤�����\n");
	scanf("%d",&m);
	if(m%4==0){
		if(m%100!=0);
		printf("������������");
	}
	else  if(m%100==0&&m%400==0)
		 printf("������������");
		 else 
		 printf("�����ݲ�������");
	return 0;
}
