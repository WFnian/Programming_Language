#include<stdio.h>
#include<stdlib.h>

typedef struct DataType{
	int x; //ϵ��
	int z; //ָ��
}DataType;

typedef struct Node{
	DataType data; //������
	struct Node *next; // ָ����
}Node, *Poly; // Poly �����ľ���һԪ����ʽ��ʽ�洢�ṹ 

void Init(Poly *p){
	// ��ʼ��һ����ͷ��������
	*p = (Node *)malloc(sizeof(Node));
	(*p)->next = NULL;
}
void Create(Poly p){
	int x, z;
	Node *newnode, *rear = p;
	while(scanf("%d%d",&x,&z)!=EOF){
		if(x==-1 && z==-1)
			break;
		newnode = (Node *)malloc(sizeof(Node));
		newnode->data.x = x;
		newnode->data.z = z;
		rear->next = newnode; //���´���������뵽����ʽ��β��
		rear = newnode; //��β��ָ����Ϊ����
	}
	rear->next = NULL;
}
void Destory(Poly *p){
	//һԪ����ʽ�Ŀռ��ͷ�
	Node *pi = *p, *q;
	while(pi!=NULL){
		q = pi->next; //�ͷŵ�ǰ�ڵ�ռ�֮ǰ��һ��Ҫ������һ���ڵ������
		free(pi);
		pi = q;
	}
}
void Merge(Poly p, Poly C){
	//������������ĺϲ����� p ���� C ��
	Node *pi=C->next, *pj = p->next, *qi=C, *qj = p;
	while(pi!=NULL && pj!=NULL){
		if(pi->data.z>pj->data.z){
			qi = pi;
			pi = pi->next;
		}
		else if(pi->data.z == pj->data.z){
			pi->data.x+=pj->data.x;
			qi = pi; qj = pj;
			pi=pi->next; pj=pj->next;
		}
		else{ // pi->data.z < pj->data.z
			// �� pj �ڵ�� p������ȡ���������뵽��������
			qj->next = pj->next; // �� pj �� P������ɾ��
			pj->next = qi->next; // �� pj ���뵽 C ������
			qi->next = pj;
			
			//�ƶ�ָ��
			qi = pj;
			pi = qi->next;
			pj = qj->next;
		}
	}
	if(pj!=NULL){ // ��ʣ�µ� P �����ͳһ���� C ��β��
		qj->next=NULL;
		qi->next = pj;
	}
}
void Mul(Poly A, Poly B, Poly C){
	//�����������Ա�ϲ���˼·
	Node *pa, *pb, *pc, *q, *newnode;
	Poly pi;
	pc = C;
	for(pa=A->next; pa!=NULL; pa=pa->next){
		Init(&pi); q=pi;
		for(pb=B->next; pb!=NULL; pb=pb->next){
			//Ϊ���������ڴ�ռ�
			newnode = (Node*) malloc(sizeof(Node));
			newnode->data.x = pa->data.x*pb->data.x;
			newnode->data.z = pa->data.z+pb->data.z;
			q->next = newnode;
			q = newnode;
		}
		q->next = NULL;
		Merge(pi, C);
		Destory(&pi);
	}
}

void Mul1(Poly A, Poly B, Poly C){
	//һԪ����ʽ�ĳ˻��� C = A*B
	Node *pa, *pb, *pc=C, *q, *newnode;
	for( pa=A->next; pa!=NULL; pa=pa->next ){	
		for( pb=B->next; pb!=NULL; pb=pb->next){
			//Ϊ���������ڴ�ռ�
			newnode = (Node*) malloc(sizeof(Node));
			newnode->data.x = pa->data.x*pb->data.x;
			newnode->data.z = pa->data.z+pb->data.z;
			//��������뵽C����ʽ������
			for(q=C, pc=C->next; pc!=NULL; q=pc, pc=pc->next){
				//ָ�� q ʼ��ָ�� pc��ǰһ�� 
				if(pc->data.z==newnode->data.z){
					pc->data.x+=newnode->data.x;
					free(newnode); 
					newnode=NULL; //��ǣ������Ѿ�����C����ʽ��
					break;
				}
				if(pc->data.z < newnode->data.z)
					break;
			}
			if(newnode==NULL)
				continue;
			newnode->next = q->next;
			q->next = newnode;
		}
	}
}


void Print(Poly p){
	Node *pi = p->next;
	if(pi==NULL) //�������ʽΪ�գ��������
		printf("0");
	while(pi!=NULL){
		if(pi->data.x!=0) //ϵ��Ϊ�������������ֻ���������
			printf("%d %d ",pi->data.x, pi->data.z);
		pi = pi->next;
	}
	printf("\n");
}
main(){
	Poly A, B, C;
	Init(&A); Init(&B); Init(&C);
	Create(A); Create(B);
	Mul(A,B,C);
	Print(C);
	Destory(&A);
	Destory(&B);
	Destory(&C);
}