#include <stdio.h> 
#include <stdlib.h> 
typedef struct stu { 
    int  x; 
    struct stu *next; 
}stu; 
stu *head = NULL; 
// �����½ڵ� 
void AddNode(int value){ 
    stu *node = (stu *)malloc(sizeof(stu)); 
    stu *p; 
    node->x = value; 
    node->next = NULL; 

    if(head == NULL){ 
        head = node; 
        return; 
    } 
    for(p = head; p->next != NULL; p = p->next)
    p->next = node; 
} 
// ɾ����һ��ֵΪvalue�Ľڵ� 
void DeleteNode(stu *value) { 
	stu *node = (stu *)malloc(sizeof(stu));
	stu*p;
	//p->next = value->next;
	for (p = head; p->next != NULL; p = p->next) {
		if (p->next==value) {

		}
	}
} 
// ���� 
void AddAfter(int prev_value, int value) { 
 // ������գ��뽫�ú�����д���� 
} 
// �ͷ��������� 
void FreeLink() { 
    stu *p; 
    for(p = head; p != NULL;){ 
        stu *n = p->next; 
        free(p); 
        p = n; 
    } 
} 

void PrintLink() { 
    stu *p; 
    for(p = head; p != NULL; p = p->next) 
        printf("%d ", p->x); 
    printf("\n"); 
} 

int main() { 
    AddNode(10); 
    AddNode(20); 
    AddNode(30); 
    AddNode(40); 
    PrintLink(); 
  //  DeleteNode(20); 
    PrintLink(); 
    AddAfter(30, 35); 
    PrintLink(); 
    FreeLink(); 
    return 0; 
} 