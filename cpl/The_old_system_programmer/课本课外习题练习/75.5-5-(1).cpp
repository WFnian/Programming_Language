#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,flag,k;
	int a[10];
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
		printf("\n");
	printf("k");
	scanf("%d",&k);
	flag=0;
	for(i=0;i<10;i++){
		if(a[i]=k){
			printf("�ҵ���");
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("û����");
}
