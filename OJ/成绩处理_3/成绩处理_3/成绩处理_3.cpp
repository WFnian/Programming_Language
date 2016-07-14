#include<iostream>
#include<iomanip>
#include<cmath>
#define MAXSIZE 30
#define OK 0
#define ERROR -1
static int N = 0;
using namespace std;

typedef int Status;
typedef struct student
{
	char name[MAXSIZE];
	long num;
	int socore;
}Students;

Students a[MAXSIZE];

void In_ascending_order()//������������г����гɼ�
{
	int min, k, t, i;
	for (k = 0; k < N; k++)//ð������
	{
		min = k;
		for (i = k + 1; i<N; i++)
		{
			if (a[i].socore<a[min].socore)
				min = i;
		}
		t = a[k].socore;
		a[k].socore = a[min].socore;
		a[min].socore = t;
	}
	for (i = 0; i<MAXSIZE; i++)
		cout << a[i].name << " " << a[i].num << " " << a[i].socore << endl;

}
void In_descending_order()//������������г����гɼ�
{
	int max, k, t, i;
	for (k = 0; k<N; k++)//ð������
	{
		max = k;
		for (i = k + 1; i<N; i++)
		{
			if (a[i].socore>a[max].socore)
				max = i;
		}
		t = a[k].socore;
		a[k].socore = a[max].socore;
		a[max].socore = t;
	}
	for (i = 0; i<MAXSIZE; i++)
		cout << a[i].name << " " << a[i].num << " " << a[i].socore << endl;
}
void Found_with_name()//��������ѯ��ѯ�ɼ�
{
	int i;
	char Str[MAXSIZE];
	cout << "Please enter a query name:" << endl;
	cin >> Str[MAXSIZE];
	for (i = 0; i <= N; i++)
		if (strcmp(Str, a[i].name))break;
	cout << "The student information:" << endl;
	cout << a[i].name << " " << a[i].num << " " << a[i].socore;
}
void FoundWithNumber()//��ѧ�Ų�ѯ��ѯ�ɼ�
{
	cout << "Please enter the student ID for which to query:" << endl;//������Ҫ��ѯѧ��ѧ�ţ�
	int M, i;
	cin >> M;
	for (i = 0; i <= N; i++)
		if (M == a[i].num)break;
	cout << "The student information:" << endl;//��ѧ���ɼ���Ϣ:
	cout << a[i].name << " " << a[i].num << " " << a[i].socore;
}
void Delete()//ɾ��ĳ��ѧ�Ŷ�Ӧ��ѧ���ɼ�(����ѧ��)
{
	cout << "������Ҫɾ����ѧ��ѧ�ţ�" << endl;
	int M, j, i;
	cin >> M;
	for (i = 0; i <= N; i++)
		if (M == a[i].num)break;
	for (j = i; j <= N - 1; j++)
	{
		strcpy(a[j].name, a[j + 1].name);
		a[j].num = a[j + 1].num;
		a[j].socore = a[j + 1].socore;
	}
	cout << "OK,delete successfully!" << endl;
}
void Insert()//����һ��ѧ���ɼ�:������ѧ�š��ɼ�
{
	int Number, Score;
	char Str1[MAXSIZE];
	cout << "Please enter the student information to be inserted:" << endl; //������Ҫ�����ѧ����Ϣ:
	cin >> Str1[MAXSIZE];
	cin >> Number;
	cin >> Score;
	strcpy(a[N + 1].name,Str1);
	a[N + 1].num = Number;
	a[N + 1].socore = Score;
	N++;
}
void Select_Score()//ѡ��������ųɼ������ɼ�
{
	int i = 0, min, max, num;
	min = i; max = i;
	for (i = 0; i<MAXSIZE; i++)
	{
		if (a[i].socore>a[max].socore)
			a[max].socore = a[i].socore;
		if (a[i].socore<a[min].socore)
			a[min].socore = a[i].socore;
	}
	cout << "��ѡ��������ųɼ�(1)�����ɼ�(2):" << endl;
	cin >> num;
	switch (num)
	{
	case 1:cout << "The best:" << a[max].name << " " << a[max].num << " " << a[max].socore; break;
	case 2:cout << "The bad:" << a[min].name << " " << a[min].num << " " << a[min].socore; break;
	default:cout << "Please enter the correct option." << endl;; break;
	}
}

void Failure_rates()//�����������
{
	int i, j = 0;
	double Q;
	for (i = 0; i<MAXSIZE; i++)
	{
		if (a[i].socore<60)
			j++;
	}
	Q = (j / N) * 100;
	cout << "Failure rates as follows:" << Q << "%" << endl;//��������Ϊ:
}
void Excellent_rates()//��������ʣ�>=80�֣�
{
	int i, j = 0;
	double W;
	for (i = 0; i < MAXSIZE; i++)
	{
		if (a[i].socore >= 80)
			j++;
	}
	W = (j / N) * 100;
	cout << "Excellent rates is:" << W << "%" << endl;//������;
}
void AVERAGE()//���ƽ���ɼ�
{
	int i, j, num, AVERAGE;
	num = 0;
	j = 1;
	for (i = 0; i<MAXSIZE; i++)
	{
		num = num + a[i].socore;
		j++;
	}
	AVERAGE = num / j;
	cout << "Average score:" << AVERAGE << endl;//ƽ���ɼ�
}

Status Inputmessage() {
	int i;
	cout << "������5-30��ѧ����Ϣ������00��������!" << endl;
	for (i = 0; i<MAXSIZE; i++)
	{
		cout << "Please enter the name:" << endl;
		cin >> a[i].name;
		if (a[i].name == 00)break;
		cout << "Please enter the student number:" << endl;
		cin >> a[i].num;
		if (a[i].num == 00)break;
		cout << "Please enter the student score:" << endl;
		cin >> a[i].socore;
		if (a[i].socore == 00)break;
		N++;
	}
	if (N < 5) {
		cout << "   Please enter more than five student information!" << endl;
		return ERROR;
	}
	return OK;
}

Status Check_Errors() {
	switch (a[2].socore) {
	case 1: {
		switch (a[2].socore) {
		case 1: {
			;
		}break;
		case 2: {
			;
		}break;
		default:break;
		}
	}break;
	case 2: {
		;
	}break;
	default:break;
	}
	return OK;
}

Status Cout() {
	cout << "**============================**" << endl;
	cout << "==1.������������г����гɼ�==" << endl;
	cout << "==2.������������г����гɼ�==" << endl;
	cout << "==3.  ������������ѯ��ѯ�ɼ�  ==" << endl;
	cout << "==4.  ����ѧ�š���ѯ��ѯ�ɼ�  ==" << endl;
	cout << "==5.ɾ��ĳ��ѧ�Ŷ�Ӧ��ѧ���ɼ�==" << endl;
	cout << "==6.     ����һ��ѧ���ɼ�     ==" << endl;
	cout << "==7.ѡ��������ųɼ������ɼ�==" << endl;
	cout << "==8.       �����������       ==" << endl;
	cout << "==9.        ���������        ==" << endl;
	cout << "==10.      ���ƽ���ɼ�       ==" << endl;
	cout << "==11.        �������         ==" << endl;
	cout << "**============================**" << endl;
	return OK;
}

int main()
{
	cout << "���������ܣ�" << endl;
	Cout();
	Check_Errors();
	Inputmessage();
	int num;
	while (1)
	{
		Cout();
		Check_Errors();
	loop:	cin >> num;
		if (num == 11)break;
		switch (num)
		{
		case 1: {
			In_ascending_order();
			Check_Errors(); 
		} break;
		case 2:
			In_descending_order();
			break;
		case 3: {
			Found_with_name(); 
			Check_Errors();
		} break;
		case 4:
			FoundWithNumber();
			break;
		case 5:
			Delete(); 
			break;
		case 6:
			Insert();
			break;
		case 7:
			Select_Score();
			break;
		case 8:
			Failure_rates();
			break;
		case 9:
			Excellent_rates();
			break;
		case 10:
			AVERAGE(); 
			break;
		default: {
			cout << "ERROR\n" << endl; 
			Check_Errors();
			goto loop; 
		}break;
		}
	}

	return OK;
}

//��������Ҫ��switch��֧���Ϊ���ģ���ð������Ϊ��Ҫ�㷨���ʵ������