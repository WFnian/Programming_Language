#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int n(char c){
	FILE*fp;
	fp=fopen("dati.cpp","r");
	if(NULL==fp){
		printf("NOT OPEN!\n");
		system("pause"); 
		return 1;
	}
	else while(!feof(fp)){
		c=fgetc(fp);
		putchar(c);
 }
	return 0;
} 
/*int tianjia(char str1[1024],char str2[1024]){
//	char ddd;
	strcat(str1,str2);
	return str1;
	
}*/
int main(){
	int op;
	char bn;
	char shu; 
	char paixu;
	int i,j,k;
	char ckdm;
	char m[4096];
	gets(m);
	puts(m);
	printf("***************************************************************\n");
	printf("�������������� ������������������������������������������������\n");
	printf("���������� ������������ѡ����루��������������  ��������������\n");
	printf("���������� ����  ���������鿴���롡����������������������������\n");
	printf("���������� �������������������롡������������������������������\n");
	printf("���������� ����������������ɾ����������������������������������\n");
	printf("���������� �������������������򡡡�����������������������������\n");
	printf("���������� �����������������˳���������������������������������\n"); 
	printf("�������� �������� ��  6������ӡ���������  ��������������������\n");
	printf("������������ ��������������������������������������������������\n");
	printf("***************************************************************\n");
	scanf("%d",&op); 
	if(op>6&&op<1)
		printf("ERROR!");
	switch (op){
		case 1: {
			ckdm=n(ckdm);
			break;
		}
			case 2:{
			printf("�������\n");

		  	scanf("%s",&shu);
			for(i=0;m[4096]!='\0';i++){
				if(m[i]='2')//||m[i]==' '||(m[i]<'Z'&&m[i]>'A')) 
				m[i]=shu;
				puts(m);
			}
			break;
		}
			case 3:{
				printf("������ѡ��ɾ�����ַ�\n");
				scanf("%c",&bn);
				for(j=0;m[4096]!='\0';j++){
					if(m[j]==bn){
						m[j]==' ';
						printf("%s",m[4096]);
					}
					else printf("NOT FOUND!");
				}
			
			break;
		}
			case 4:{
				printf("����;�ҳ���С��");
				scanf("%s",&paixu);
				if(paixu<m[4096]) 
				printf("%s",paixu);
				else
				putchar(m[4096]);
			break;
		}
			case 5:{		
			break;
		}
			case 6:{
					printf("���\n"); 
			char cv;
			
			scanf("%s",&cv);
			printf("%s",cv);
			printf("%s %s",m,cv);
		/*	char cha[1024];
			char ss[1024];
			gets(cha);
			ss=tianjia(ckdm,cha);
			puts(ss);*/
				
			break;
		}
		default: break;
	}
	
}
 
