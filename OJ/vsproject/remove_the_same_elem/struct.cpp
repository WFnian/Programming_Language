#include<iostream>
using namespace std;
void menu();
void rate();
int max();
int min();
void pubave(int c);
void order();
void peraverage();
void singledisplay();
void menu();
void alldisplay();
void output();
void idorder();
void menub();
struct student
{
	int id[10];
	char name[20];
	int chin;
	int math;
	int eng;
	int che;
	int pol;
};
struct student a[30];
int main()
{
	int d;
	do
	{
		menub();
		cout << "�����������ѡ��һ��ѡ��" << endl;
		cin >> d;
		switch (d)
		{
		case 1:singledisplay()��
		case 2:peraverage();
		case 3:pubave();
		case 4:rate();
		case 5:min();
		case 6:max();
		case 7:order();
		case 8:idorder();
		case 0:break;
		default:cout << "����������" << endl;
		}
	} while (d != 0)
		return 0;
}

void rate()
{
	int i, s = 0, c;
	cout << "���������һѡ��γ�" << endl;
	menu();
	cin << c;
	switch (c)
	{
	case 1: {for (i = 1; i <= 30; i++) { if (a[i].chin >= 60)	s = s + 1; }}
	case 2: {for (i = 1; i <= 30; i++) { if (a[i].math >= 60)	s = s + 1; }}
	case 3: {for (i = 1; i <= 30; i++) { if (a[i].eng >= 60)	s = s + 1; }}
	case 4: {for (i = 1; i <= 30; i++) { if (a[i].che >= 60)	s = s + 1; }}
	case 5: {for (i = 1; i <= 30; i++) { if (a[i].pol >= 60)	s = s + 1; }}
	}
	rate = s / 30;
	cout << "���ſγ̼�����Ϊ" << rate << endl;
}
int max()
{
	int i, m, c;
	cout << "���������һѡ��γ�" << endl;
	menu();
	cin << c;
	switch (c)
	{
	case 1: {m = a[0].chin; for (i = 1; i <= 30; i++) { if (a[i].chin>a[0].chin)	m = a[i].chin }cout << "���ֵΪ" << m};
	case 2: {m = a[0].math; for (i = 1; i <= 30; i++) { if (a[i].math>a[0].math)	m = a[i].math }cout << "���ֵΪ" << m};
	case 3: {m = a[0].eng; for (i = 1; i <= 30; i++) { if (a[i].eng>a[0].eng)	m = a[i].eng }cout << "���ֵΪ" << m};
	case 4: {m = a[0].che; for (i = 1; i <= 30; i++) { if (a[i].che>a[0].che)	m = a[i].che }cout << "���ֵΪ" << m};
	case 5: {m = a[0].pol; for (i = 1; i <= 30; i++) { if (a[i].pol>a[0].pol)	m = a[i].pol }cout << "���ֵΪ" << m};
	}
}
int min()
{
	int i, m, c;
	cout << "���������һѡ��γ�" << endl;
	menu();
	cin << c;
	switch (c)
	{
	case 1: {m = a[0].chin; for (i = 1; i <= 30; i++) { if (a[i].chin<a[0].chin)	m = a[i].chin }cout << "��СֵΪ" << m};
	case 2: {m = a[0].math; for (i = 1; i <= 30; i++) { if (a[i].math<a[0].math)	m = a[i].math }cout << "��СֵΪ" << m};
	case 3: {m = a[0].eng; for (i = 1; i <= 30; i++) { if (a[i].eng<a[0].eng)	m = a[i].eng }cout << "��СֵΪ" << m};
	case 4: {m = a[0].che; for (i = 1; i <= 30; i++) { if (a[i].che<a[0].che)	m = a[i].che }cout << "��СֵΪ" << m};
	case 5: {m = a[0].pol; for (i = 1; i <= 30; i++) { if (a[i].pol<a[0].pol)	m = a[i].pol }cout << "��СֵΪ" << m};
	}
}
void pubave()
{
	int i, s = 0, c;
	cout << "���������һѡ��γ�" << endl;
	menu();
	cin << c;
	switch (c)
	{
	case 1: {for (i = 1; i <= 30; i++) s = s + a[i].chin;	ave = s / 30; }
	case 2: {for (i = 1; i <= 30; i++) s = s + a[i].math;	ave = s / 30; }
	case 3: {for (i = 1; i <= 30; i++) s = s + a[i].eng;	ave = s / 30; }
	case 4: {for (i = 1; i <= 30; i++) s = s + a[i].che;	ave = s / 30; }
	case 5: {for (i = 1; i <= 30; i++) s = s + a[i].pol;	ave = s / 30; }
	}
	cout << ave << endl;
}
void order()
{
	int i, minpos, k, t, n, c;
	cout << "���������һѡ��γ�" << endl;
	menu();
	cin << c;
	switch (c)
	{
	case 1: {for (i = 0; i<29; i++) {
		minpos = i; {for (k = 29 - i; k >= 0; k--) { if (a[k].chin<a[minpos].chin)	  minpos = k; } t = a[i].chin; a[i].chin = a[minpos].chin; a[minpos].chin = t; }
		output(c);
	}
	case 2: {for (i = 0; i<29; i++) {
		minpos = i; {for (k = 29 - i; k >= 0; k--) { if (a[k].math<a[minpos].math)	  minpos = k; } t = a[i].math; a[i].math = a[minpos].math; a[minpos].math = t; }
		output(c);
	}
	case 3: {for (i = 0; i<29; i++) {
		minpos = i; {for (k = 29 - i; k >= 0; k--) { if (a[k].eng<a[minpos].eng)	  minpos = k; } t = a[i].eng; a[i].eng = a[minpos].eng; a[minpos].eng = t; }
		output(c);
	}
	case 4: {for (i = 0; i<29; i++) {
		minpos = i; {for (k = 29 - i; k >= 0; k--) { if (a[k].che<a[minpos].che)	  minpos = k; } t = a[i].che; a[i].che = a[minpos].che; a[minpos].che = t; }
		output(c);
	}
	case 5: {for (i = 0; i<29; i++) {
		minpos = i; {for (k = 29 - i; k >= 0; k--) { if (a[k].pol<a[minpos])	  minpos = k; } t = a[i].pol; a[i].pol = a[minpos].pol; a[minpos].pol = t; }
		output(c);
	}
	}
	}
			void input() { cin >> id >> name >> chin >> math >> eng >> che >> pol; }
			void peraverage()
			{
				int num[10];
				int i, k, s = 0;
				cout << "������Ҫ��ѯ��ѧ��" << endl;
				cin >> num;
				for (i = 0; i<30; i++)
				{
					if (a[i].id == num)
						k = i; break;
					if (a[i].id != num)
						s = s + 1;
				}
				if (s = 30)
				{
					cout << "ѧ���������" << endl;
					break;
				}
				cout << a[k.name]"��Ʒ���ɼ�Ϊ" << (chin + math + eng + che + pol) / 5 << endl;
			}
			void singledisplay()
			{
				int num[10];
				int i, k;
				cout << "������Ҫ��ѯ��ѧ��" << endl;
				cin >> num;
				for (i = 0; i<30; i++)
				{
					if (a[i].id == num)
						k = i;
				}
				cout << "���������һѡ��γ�" << endl;
				menu();
				cin << c;
				switch (c)
				{
				case 1:cout << a[k].name << '	' << a[k].chin << endl;
				case 2:cout << a[k].name << '	' << a[k].math << endl;
				case 3:cout << a[k].name << '	' << a[k].eng << endl;
				case 4:cout << a[k].name << '	' << a[k].che << endl;
				case 5:cout << a[k].name << '	' << a[k].pol << endl;
				default:cout << "����������" << endl;
				}
				void menu()
				{
					cout << "1.����" << endl;
					cout << "2.��ѧ" << endl;
					cout << "3.Ӣ��" << endl;
					cout << "4.��ѧ" << endl;
					cout << "5.����" << endl;
				}
				void alldisplay()
				{
					cout << "���������һѡ��γ�" << endl;
					menu();
					cin << c;
					switch (c)
					{
					case 1:cout << "����ƽ���ɼ�" << pubave(c) << endl;
					case 2:cout << "��ѧƽ���ɼ�" << pubave(c) << endl;
					case 3:cout << "Ӣ��ƽ���ɼ�" << pubave(c) << endl;
					case 4:cout << "��ѧƽ���ɼ�" << pubave(c) << endl;
					case 5:cout << "����ƽ���ɼ�" << pubave(c) << endl;
					}

					void output(int c)
					{
						int i;
						switch (c)
						{
						case 1: {for (i = 0; i<30; i++)cout << a[i].name << a[i].id << a[i].chin << endl; }
						case 2: {for (i = 0; i<30; i++)cout << a[i].name << a[i].id << a[i].math << endl; }
						case 3: {for (i = 0; i<30; i++)cout << a[i].name << a[i].id << a[i].eng << endl; }
						case 4: {for (i = 0; i<30; i++)cout << a[i].name << a[i].id << a[i].che << endl; }
						case 5: {for (i = 0; i<30; i++)cout << a[i].name << a[i].id << a[i].pol << endl; }
						}

						void idorder()
						{
							for (i = 0; i<29; i++) {
								minpos = i;
								{ for (k = 29 - i; k >= 0; k--)
								{
									if (a[k].id<a[minpos].id)
										minpos = k;
								}
								t = a[i].id;
								a[i].id = a[minpos].id;
								a[minpos].id = t;
								output(c)��}
							}

							void menub()
							{
								cout << "1��ѯĳѧ��ĳ�ſγɼ�������ѧ�ţ�����ɼ���" << endl;
								cout << "2��ѯĳѧ��ƽ���ɼ�������ѧ�ţ�����ɼ���" << endl;
								cout << "3��ѯĳ�ſ�ƽ���ɼ�������γ̣����ƽ���ɼ���" << endl;
								cout << "4��ѯĳ�ſμ����ʣ�����γ̣���������ʣ�" << endl;
								cout << "5��ѯĳ�ſγ���С�ɼ�������γ̣������������С�ɼ���" << endl;
								cout << "6��ѯĳ�ſγ����ɼ�������γ̣�������������ɼ���" << endl;
								cout << "7��ĳ�ſγ̰�ѧ�Ŵ�С��������ɼ����������������ѧ�š��ɼ���" << endl;
								cout << "8��ĳ�ſγ̰��ɼ���С��������ɼ����������������ѧ�š��ɼ���" << endl;
								cout << "9���ѧ������Ӧ�γ̳ɼ�""<<endl;
									cout << "0�˳�" << endl;
							}*/
