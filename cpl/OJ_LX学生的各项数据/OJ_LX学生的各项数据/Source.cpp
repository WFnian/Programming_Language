/*������N��ѧ�������ݼ�¼��ÿ����¼����ѧ�š����������Ƴɼ��� ��дһ
������input,��������һ��ѧ�������ݼ�¼�� ��дһ������print,��ӡһ��ѧ����
���ݼ�¼�� ��������������������������ȡN����¼���룬�ٰ�Ҫ������� N<100
����
ѧ������Nռһ�� ÿ��ѧ����ѧ�š����������Ƴɼ�ռһ�У��ո�ֿ���
���
ÿ��ѧ����ѧ�š����������Ƴɼ�ռһ�У����ŷֿ���
��������
2
a100 zhblue 70 80 90
b200 newsclan 90 85 75
�������
a100,zhblue,70,80,90
b200,newsclan,90,85,75
*/
#include<stdio.h>
typedef struct Stu{
	char Num[20];
	char Name[22];
	int a;
	int b;
	int c;
}Student;
int main() {
	int i, N;
	Student s[22];
	scanf("%i", &N);
	for (i = 0; i < N; i++) {
		scanf("%s %s %i %i %i", s[i].Num, s[i].Name, &s[i].a, &s[i].b, &s[i].c);
	}
	for (i = 0; i < N; i++) {
		printf("%s,%s,%i,%i,%i\n", s[i].Num, s[i].Name, s[i].a, s[i].b, s[i].c);
	}
}