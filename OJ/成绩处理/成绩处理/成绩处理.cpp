#include<stdio.h>
#include<iostream>
#include<iomanip>

using namespace std;

#define MAX 20

typedef int Status;
typedef struct student {
	char name[MAX];
	long num;
	float a, b, c, d, e;
}Stu;

void InputStu() {
	printf("\n��¼��ѧ����Ϣ!\n\n");
	Stu Student[30];
	int i = 0;
	for (i = 0; i < 30; i++) {
		scanf("%s %ld %lf %lf %lf %lf", Student[i].name, &Student[i].num, &Student[i].a, &Student[i].b, &Student[i].c, &Student[i].d, &Student[i].e);
	}

}

int main() {
	cout << "��ѡ��Ҫִ�е�ְ�ܣ�1-4��" << endl;
	cout << "``````````````````````````````````````````````````" << endl;
	cout << "1.	��ѧ����ѯ" << endl;
	cout << "1��1	��ѯĳѧ��ĳ�ſγɼ�������ѧ�ţ�����ɼ���" << endl;
	cout << "1��2	��ѯĳѧ��ƽ���ɼ�������ѧ�ţ�����ɼ���" << endl;
	cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
	cout << "2�����γ̲�ѯ" << endl;
	cout << "2��1  ��ѯĳ�ſ�ƽ���ɼ�������γ̣����ƽ���ɼ���" << endl;
	cout << "2��2 ��ѯĳ�ſμ����ʣ�����γ̣���������ʣ�" << endl;
	cout << "2��3 ��ѯĳ�ſγ���С�ɼ�������γ̣������������С�ɼ�" << endl;
	cout << "2��4 ��ѯĳ�ſγ����ɼ�������γ̣�������������ɼ���" << endl;
	cout << "2��5  ��ĳ�ſγ̰�ѧ�Ŵ�С��������ɼ����������������ѧ�š��ɼ���" << endl;
	cout << "2��6  ��ĳ�ſγ̰��ɼ���С��������ɼ����������������ѧ�š��ɼ���" << endl;
	cout << "*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*" << endl;
	cout << "3. ���ѧ������Ӧ�γ̳ɼ�" << endl;
	cout << "!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^" << endl;
	cout << "4. ɾ��ѧ������Ӧ�γ̳ɼ�" << endl;
	cout << "~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~" << endl;
	
	//InputStu();
	printf("\n��¼��ѧ����Ϣ!\n\n");
	Stu Student[30];
	int i = 0;
	for (i = 0; i < 30; i++) {
		scanf("%s %ld %lf %lf %lf %lf", Student[i].name, &Student[i].num, &Student[i].a, &Student[i].b, &Student[i].c, &Student[i].d, &Student[i].e);
	}

	int first_operate, second_operate;
	printf("�������һ��������ע�⣬����ֻ������1-4,������Ч��\n");
	while (scanf("&d", &first_operate)!=NULL) {
		switch (first_operate) {
		case 1: {
			cout << "1.	��ѧ����ѯ����ӭ" << endl;
			printf("������ڶ���������ע�⣬����ֻ������1-2,������Ч��\n");
			scanf("&d", &second_operate);
			switch (second_operate) {
			case 1: {
				cout << "1��1	��ѯĳѧ��ĳ�ſγɼ�������ѧ�ţ�����ɼ���" << endl;
				long sum;
				scanf("%ld", &sum);
				for (i = 0; i < 30; i++) {
					if (sum == Student[i].num) {
						printf("�ɼ���%d %d %d %d %d\n", Student[i].a, Student[i].b, Student[i].c, Student[i].d, Student[i].e);
					}
					else printf("�����ڣ�\n");
				}
			}break;
			case 2: {
				cout << "1��2	��ѯĳѧ��ƽ���ɼ�������ѧ�ţ�����ɼ���" << endl;
				long sum1;
				scanf("%ld", &sum1);
				for (i = 0; i < 30; i++) {
					if (sum1 == Student[i].num) {
						printf("ƽ���ɼ���%d \n", (Student[i].a+Student[i].b+Student[i].c+ Student[i].d+ Student[i].e)/5);
					}
					else printf("�����ڣ�\n");
				}
			}break;
			default:cout << "ERROR\n" << endl;
			}
		}break;
		case 2: {
			cout << "2�����γ̲�ѯ" << endl;
			cout << "������ڶ���������ע�⣬����ֻ������1-6,������Ч��\n" << endl;
		}break;
		case 3: {
			cout << "3. ���ѧ������Ӧ�γ̳ɼ�" << endl;
		}break;
		case 4: {
			cout << "4. ɾ��ѧ������Ӧ�γ̳ɼ�" << endl;
		}break;
		default:printf("ERROR!\n"); break;
		}
	}
}