#include"stdio.h"
int main(){
	int x,y,t,n1,n2;
	int r;
	printf("SHU RU LIANG GE���ӣȣ�");
	scanf("%d %d",&n1,&n2);
	r=n1%n2;
	while(r!=0){
		n1=n2;
		n2=r;
		r=n1%n2;
	}
	printf("ZUI da gong yueshu shi %d\n",n2);
	printf("�ڣգ�XIAO�ǣϣΣ�BEI�ӣȣ�SHI %d",n1*t/n2);
	return 0;
} 
