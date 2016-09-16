#include<stdio.h>
#include<string.h>

#define MaxSize 11
typedef char DataType[8];

typedef struct StaticNode{ // ��̬�����У�����Ԫ�ص�����
	DataType data; //���������򣬴洢����
	int next; //ָ����ָ����������һ���ڵ��λ�ã����ڴ洢�ռ��е����
}StaticNode;

typedef struct StaticList{
	StaticNode space[MaxSize]; //��̬����Ĵ洢�ռ�
	int data_head; // ���������ͷ�� �̶�Ϊ1
	// int free_head; // ���пռ������ͷ�� �̶�Ϊ0
}StaticList;

void Init(StaticList *SL){
	int i, head;
	for(i=0; i<MaxSize-1; i++){
		SL->space[i].next = i+1;
		strcpy(SL->space[i].data,"");
	}
	SL->space[i].next = 0;
	strcpy(SL->space[i].data,"");

	//�������������ͷ��㣺
	SL->data_head = Malloc(SL);
	SL->space[SL->data_head].next = 0; //��ʼʱ��������Ϊ��
}
int Malloc(StaticList *SL){
	int ans = SL->space[0].next;
	SL->space[0].next = SL->space[ans].next;
	return ans;
}
void Free(StaticList *SL, int delnode){
	//�ͷſռ䣬�����ռ���뵽���������б���
	SL->space[delnode].next = SL->space[0].next;
	SL->space[0].next = delnode;
}
void Insert(StaticList *SL, int a, DataType e){
	int i, newnode = Malloc(SL), p; //��������ռ�
	strcpy(SL->space[newnode].data, e); //�����ݴ�������ռ���

	//����������Ӧ�ý����ݲ��뵽����������
	for(i=0, p=SL->data_head; i<a-1; i++)
		p = SL->space[p].next;
	SL->space[newnode].next = SL->space[p].next;
	SL->space[p].next = newnode;
}
void Delete(StaticList *SL, int a){
	int i, p, delnode;
	//ͨ��ѭ���ҵ���a-1��Ԫ��
	for(i=0, p=SL->data_head; i<a-1; i++)
		p = SL->space[p].next;
	delnode = SL->space[p].next;
	SL->space[p].next = SL->space[delnode].next; //�޸�ָ��
	
	Free(SL, delnode); //�ͷſռ�
}
int Search(StaticList *SL, DataType key){
	int p = SL->space[SL->data_head].next;
	while(p!=0){
		if(strcmp(SL->space[p].data, key)==0)
			break;
		p = SL->space[p].next;
	}
	return p;
}
void Show(StaticList *SL){
	int i;
	for(i=0; i<MaxSize;i++)
		printf("%-8s%2d\n",SL->space[i].data, SL->space[i].next);
}
main(){
	char order[10];
	int a;
	DataType e;
	StaticList sl;
	Init(&sl);
	while(scanf("%s",order)!=EOF){
		switch(order[2]){
		case 's': //insert ָ��
			scanf("%d %s", &a, e);
			Insert(&sl, a, e);
			break;
		case 'o': //show ָ��
			Show(&sl);
			printf("********************\n");
			break;
		case 'a': //seach ָ��
			scanf("%s", e);
			printf("%2d\n", Search(&sl, e));
			printf("********************\n");
			break;
		case 'l'://delete ָ��
			scanf("%d", &a);
			Delete(&sl, a);
			break;
		}
	}
}