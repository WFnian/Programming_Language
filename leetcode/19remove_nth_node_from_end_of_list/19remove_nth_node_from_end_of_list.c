#include<stdio.h>
// Definition for singly-linked list.
struct ListNode {
	int val;
	struct ListNode *next;
};
int Length(struct ListNode* head) {
	int length = 0;
	while (head->next != NULL) {
		length++;
	}
	return length;
}
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
	int length = Length(&head);
	int i;
	for (i = 0; i < n+length; i++) {
		if (i == length - n)
			head->next = head->next->next;
		head = head->next;
	}
	return head;
}
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
	struct ListNode *cp, *cb;
	if (head == NULL) return ;
	struct ListNode *del = (struct ListNode *) malloc(sizeof(struct ListNode));
	if (del == NULL) return ;//�ռ�����ʧ��
	int count = 0, num = 0;
	cb = head;
	cp = head;
	while (cb != NULL) {
		++count;//����������
		cb = cb->next;
	}
	num = count - n;
	if (num == 0) {
		del = head;//���ɾ����һ����
		head = head->next;
	}
	else {
		while (--num) 
			cp = cp->next;
		del = cp->next;
		cp->next = cp->next->next;
	}
	free(del);
	return head;
}