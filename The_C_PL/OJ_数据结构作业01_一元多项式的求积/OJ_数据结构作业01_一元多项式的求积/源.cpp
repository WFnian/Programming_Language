/*��Ŀ����
һ��һԪ����ʽ���Կ��������ɸ�һԪ����ʽ���������гɵ����Ա�
���д��������������һԪ����ʽ��������������Ľ����
����
����Ϊ����һԪ����ʽ��ÿ��һԪ����ʽ����һ�У����ս�����������ÿ
������ʽ��ϵ����ָ��������-1 -1��Ϊ������ ϵ����ָ����Ϊ������ָ����С��0��
���
���Ϊ����������ʽ�����ս����������ÿ�������ϵ����ָ����ÿ����
ֵ������һ���ո����������������ʽ���С� ϵ��Ϊ0�ĵ���ʽ����
����������ǽ������ʽ����0����ֱ�����0��
��������
2 5 1 0 -1 -1
5 4 3 0 -1 -1
�������
10 9 6 5 5 4 3 0 */
////////#include<stdio.h>
////////int main() {
////////	int a, b, c, d, e, f;
////////	while (scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF) {
////////		if (e == f == -1)break;
////////		printf("%d %d %d %d %d %d %d %d %d");
////////	}
////////}
/*
#include <stdio.h>
int a1[10000], b1[10000];
int a2[10000], b2[10000];
int ans[10000];
int main(int argc, char const *argv[])
{
    int N1 = 0, N2 = 0;
    while(1)
    {
        scanf("%d%d", &a1[N1], &b1[N1]);
        if(a1[N1] == -1 && b1[N1] == -1)
            break;
        ++N1;
    }
    while(1)
    {
        scanf("%d%d", &a2[N2], &b2[N2]);
        if(a2[N2] == -1 && b2[N2] == -1)
            break;
        ++N2;
    }
    for(int i = 0; i < N1; ++i)
    {
        for(int j = 0; j < N2; ++j)
        {
            ans[b1[i] + b2[j]] += a1[i] * a2[j];
        }
    }
    bool out = false;
    for(int i = 10000; i >= 0; --i)
    {
        if(ans[i] != 0)
        {
            printf("%d %d ", ans[i], i);
            out = true;
        }
    }
    printf("%s", out ? "\n" : "0\n");
    return 0;
}
 */
#include <stdio.h>
//#define N 1000
//int ap[N];
//int ae[N];
//int bp[N];
//int be[N];
//int main() {
//	int i = 0, j = 0;
//	int alen, blen; 
//	while (scanf("%d%d", &ap[i], &ae[i]), ap[i] >= 0 && ae[i] >= 0) {
//		i++;
//	} 
//	while (scanf("%d%d", &bp[j], &be[j]), bp[j] >= 0 && be[j] >= 0) { 
//		j++; 
//	} 
//	alen = i, blen = j;
//	i = j = 0;
//	while (i < alen && j < blen) { if (ae[i] > be[j]) {
//		printf("%d %d ", ap[i], ae[i]);
//		i++; 
//	} else if (ae[i] < be[j]) {
//		printf("%d %d ", bp[j], be[j]);
//		j++;
//	} else {
//		printf("%d %d ", bp[j]+ap[i], be[j]);
//		i++; j++;
//	}
//	} while (i < alen) { 
//		printf("%d %d ", ap[i], ae[i]); 
//		i++;
//	} while (j < blen) {
//		printf("%d %d ", bp[j], be[j]);
//		j++;
//	} return 0;
//}
#include<malloc.h>
struct polynomial {
	int factor;			// ϵ��
	int exp;			// ָ��
	struct  polynomial * next;
};
struct polynomial * multiplication(polynomial* p1, polynomial* p2)
{
	polynomial* result = malloc(sizeof(polynomial));
	result.factor = p1.factor * p2.factor;
	result.exp = p1.exp + p2.exp;

	return result;
}
polynomial* getElement() {
	polynomial* ele = (struct polynomial*) malloc(sizeof(struct polynomial));
	ele->next = NULL;
}

void appendList(polynomial* head, polynomial* next) {
	polynomial* tail = head;
	while (tail->next != NULL) {
		tail = tail->next;
	}

	tail->next = next;
}

int main() {
	int factor = 0, exp = 0;
	polynomial * head1 = NULL, *head2 = NULL, *next = NULL;
	polynomial* p1, p2;
	polynomial* result = NULL;

	// �����һ������
	while (1) {
		scanf("%d %d", &factor, &exp);
		if (factor == -1 && exp == -1)
			break;					// ������-1��-1����

		next = getElement();
		next->factor = factor;
		next->exp = exp;
		if (head1 == NULL)
			head1 = next;
		else
			appendList(head1, next);
	}

	// ����ڶ�������
	while (1) {

	}


	// ����ʽ���
	for (p1 = head1; p1 != NULL; p1 = p1->next) {
		for (p2 = head2; p2 != NULL; p2 = p2->next) {
			next = multiplication(p1, p2);
			if (result == NULL) {
				result = next;
			}
			else {
				appendList(result, next);
			}
		}
	}
	// �ϲ�ͬ����
	//scanf("%d %d", )

}

