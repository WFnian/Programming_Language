#include<stdio.h> 
#include<time.h>
#include<stdlib.h>
int main(){
	int op;
	int a=1,b=2,c;
	srand(time(0));
		a=rand()%10;
	printf("��ʼ����\n"
		   "����һ����0��9֮��\n"
	); 
	scanf("%d",&c);
	while(1){ 
	if(c>a) 
lo:		printf("���ˣ�\n");
		
		goto loop;
	
loop:	if(c<a)
		printf("С�ˣ�\n");
			goto lo;	
		if(a==c){
			printf("��ϲ�¶�!\n"); 
		break; 
		} 
		} 
}
