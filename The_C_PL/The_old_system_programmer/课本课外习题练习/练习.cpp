#include<stdio.h>
int main(){
	char c;
	printf("������һ���ַ���\n");
	c=getchar();
	if(c<='z'&&c>='a'||c<='Z'&&c>='A')
		printf("������ĸ%c��ASCII��Ϊ��%d",c,c);
	else
		 printf("�����%c����Ӣ����ĸ\n",c);
	return 0;
} 
