#include<stdio.h>
int main(){
	FILE*fp;
	fp=fopen("f:\\�½��ļ��ļ�.txt","w");
	fprintf(fp,"hello�����꣡"); 
	fclose(fp);
}
