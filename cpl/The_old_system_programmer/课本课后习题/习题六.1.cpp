#include<stdio.h>
int main(){
	int m,n;
	int k(int a,int b);
	printf("��������������");
	scanf("%d,%d",&m,&n);
	printf("\n ��������С��������%d \n",k(m,n));
}
int k(int a,int b){
	int x=a,y=b;
	while(y!=0){
		int r;
		r=x%y;
		x=y;y=r;
		}
	return a*b/x;
}
