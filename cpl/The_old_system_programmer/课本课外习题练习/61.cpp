#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y,r;
	scanf("%d %d",&x,&y);
	do{
		r=x%y;
		x=y;
		y=r;
	}while(y!=0);//ִ�� 
	printf("%d",x);
}

