#include<iostream>
#include<iomanip>
#include<cmath>
#define MAXSIZE 30
#define OK 0
#define ERROR -1
static int N = 0;
using namespace std;
int a[30];
struct student
{
public:
	int n;
	int num;
	int name;
	int score;
	for (n = 0; n >= 5 && n <= 30; n++)
		cout << "������5-30��ѧ����Ϣ����0����" << endl;
	cout << "������ѧ��" << endl;
	if (a[i].num == 0)break;
	cin >> a[i].num;
	cout << "����������" << endl;
	if (a[i].name == 0)break;
	cin >> a[i].name;
	cout << "������ɼ�" << endl;
	if (a[i].score == 0)break;
	cin >> a[i].score;

}
void item();
void enquiry();
void dele();
void insert();
void select();
void fail();
void excellent();
void ave();
int main()
{
	int sele;
	while (1)
	{
		cout << "��ѡ��Ҫִ�еĹ��ܣ���������1-9��" << endl;
		cout << "*****************************************" << endl;
		cout << "1.�г����гɼ�,1.���������2.��������ɼ���" << endl;
		cout << "2.��ѯ�ɼ���1.��������ѯ 2.��ѧ�Ų�ѯ" << endl;
		cout << "3.ɾ��ĳ��ѧ�ţ����룩��Ӧ��ѧ���ɼ�" << endl;
		cout << "4.����һ��ѧ���ɼ���������ѧ�š��ɼ�)" << endl;
		cout << "5.ѡ��������ųɼ������ɼ���" << endl;
		cout << "6.�����������" << endl;
		cout << "7.��������ʣ�>=80�֣�" << endl;
		cout << "8.���ƽ���ɼ�" << endl;
		cout << "9.�˳�ϵͳ" << endl;
		cout << "*****************************************" << endl;
		cin >> select;
		if (select == 9) break;
		switch (sele)
		{
		case 1:item(); break;
		case 2:enquiry(); break;
		case 3:dele(); break;
		case 4:insert(); break;
		case 5:select(); break;
		case 6:fail(); break;
		case 7:excellent(); break;
		case 8:ave(); break;
		default:cout << "��������ȷ��ѡ��" << endl;
		}
	}
	return 0;
}
void item()
{
	int min, k, t, i;
	double m;
	if (m == 1)
		for (k = 0; k<n; k++)
		{
			min = k;
			for (i = k + 1; i<n; i++)
			{
				if (a[i].socore<a[min].socore)
					min = i;
			}
			t = a[k].socore;
			a[k].socore = a[min].socore;
			a[min].socore = t;
		}
	for (i = 0; i<30; i++)
		cout << "a[i].name" << "a[i].num " << "a[i].socore" << endl;
}
		else if (m == 2)
		{
			int max, k, t, i;
			for (k = 0; k<n; k++)
			{
				max = k;
				for (i = k + 1; i<n; i++)
				{
					if (a[i].socore>a[max].socore)
						max = i;
				}
				t = a[k].socore;
				a[k].socore = a[max].socore;
				a[max].socore = t;
			}
			for (i = 0; i<30; i++)
				cout << "a[i].name " << "a[i].num" << "a[i].socore" << endl;
		}
}
cout << "in item function" << endl;
//�г����гɼ���ÿ��2��ѧ�������������ѧ�š��ɼ�����1.���������2.��������ɼ���

}
void enquiry()
{
	int m, i;
	char a[30];
	cout << "������Ҫ��ѯѧ��������" << endl;
	cin >> m;
	if (m == 1)
	{
		for (i = 0; i <= n; i++)
		{
			if (strcmp(na, a[i].name))break;
			cout << "��ѧ���ɼ���Ϣ:" << endl;
		}
		cout << "a[i].name" << "a[i].num " << "a[i].socore" << endl;
	}
	cout << "in enquiry function" << endl;
}
		else if (m == 2)
		{
			cout << "������Ҫ��ѯѧ��ѧ�ţ�" << endl;
			for (i = 0; i <= n; i++)
				int b;
			cin >> b;
			if (b == a[i].num)break;
			cout << "��ѧ���ɼ���Ϣ:" << endl;
			cout << "a[i].name" << "a[i].num " << "a[i].socore" << endl;
			//��ѯ�ɼ���1.��������ѯ 2.��ѧ�Ų�ѯ


		}

		void dele()
		{
			? cout << "������Ҫɾ����ѧ��ѧ�ţ�" << endl;
			int b, j, i;
			cin >> b;
			for (i = 0; i <= n; i++)
			{
				if (b == a[i].num)break;
				for (j = i; j <= n - 1; j++)
				{
					strcpy(a[j].name, a[j + 1].name);
					a[j].num = a[j + 1].num;
					a[j].socore = a[j + 1].socore;
				}
				cout << "in dele function" << endl;
				//ɾ��ĳ��ѧ�ţ����룩��Ӧ��ѧ���ɼ���
			}


		}
		void insert()
		{
			int ? i, c;
			char a[30];
			cout << "������Ҫ�����ѧ����Ϣ:" << endl;
			cin >> i;
			cin >> c;
			strcpy(a[n + 1].name, i);
			a[n + 1].num = c;
			a[n + 1].socore = c;
			n++;
			cout << "in itinsert function" << endl;
			//����һ��ѧ���ɼ���������ѧ�š��ɼ�����

		}
		void select()
		{
			int i, min, max, c;
			min = a[0].score; max = a[0].score;
			for (i = 0; i<30; i++)
			{
				if (a[i].socore>max)
				{
					c = max;
					max = a[i].socore;
				}
				if (a[i].socore<min)
				{
					min = a[i].socore;
				}

				cout << "���ֵ" << max << endl;

				cout << "��Сֵ" << min << endl;

			}
			void fail()
			{
				int i, j;
				double Q;
				for (int i = 0; i<30; i++)
				{
					if (a[i].socore<60)
						j++;
				}
				Q = (j / n) * 100;
				cout << "��������Ϊ:" << Q << "%" << endl;
				//����������ʡ�

			}
			void excellent()
			{
				int i, j;
				double W;
				for (i = 0; i<30; i++)
				{
					if (a[i].socore >= 80)
						j++;
				}
				W = (j / n) * 100;
				cout << "������Ϊ:" << W << "%" << endl;
				//��������ʣ�>=80�֣���

			}
			void ave()
			{
				int ? i, j, num, ave;
				num = 0;
				j = 1;
				for (i = 0; i<30; i++)
				{
					num = num + a[i].socore;
					j++;
				}
				ave = num / j;
				cout << "ƽ���ɼ�Ϊ:" << ave << endl;
				//���ƽ���ɼ�

			}




