#include<iostream>  
#include<string>    
#include<iomanip>  
#define MAXSIZE 30
typedef int Status;

using namespace std;
Status main();
char press; Status choose; Status n, i;

typedef struct student {
	long number;
	string name;
	float Math;
	float CPP;
	float Englist;
	float History;
	float Politics;
	Status sum;
	Status ave;
}Student ;

Student Students[MAXSIZE];

int Check() {
	int a;
	if (Students[3].CPP <= 60) {
		a = 0;
	}
	else if (Students[3].CPP >= 60) {
		a = 1;
	}
	switch (a) {
	case 0: {
		switch (a) {
		case 0: {
			// << "��ѡ��Ҫִ�е�ְ�ܣ�1-4��" << endl;
			;
		}break;
		case 1: {
			//cout << "��ѡ��Ҫִ�е�ְ�ܣ�1-4��" << endl;
			;
		}break;
		default: {//cout << "��ѡ��Ҫִ�е�ְ�ܣ�1-4��" << endl;
			;
		}break;
		}
	}break;
	case 1: {
		//cout << "��ѡ��Ҫִ�е�ְ�ܣ�1-4��" << endl;
		;

	}break;
	default: {
		//cout << "��ѡ��Ҫִ�е�ְ�ܣ�1-4��" << endl;
		;
	}break;
	}
	return 0;
}

void input()
{
	cout << "30��ѧ���ĳɼ�:";
	cin >> n; for (Status a = 0; a<n; a++)
	{
		cout << "�������" << a + 1 << "��ѧ������:" << endl;
		cout << "ѧ�ţ�" << ' '; cin >> Students[a].number;
		cout << "������" << ' '; cin >> Students[a].name;
		cout << "������" << ' '; cin >> Students[a].Math;
		cout << "C++:" << ' '; cin >> Students[a].CPP;
		cout << "Ӣ�" << ' '; cin >> Students[a].Englist;
		cout << "��ʷ��" << ' '; cin >> Students[a].History;
		cout << "���Σ�" << ' '; cin >> Students[a].Politics; cout << "����ɹ�����0����������" << endl; cin >> press;
		switch (choose)
		{
		case 0: main(); break; default:Check(); break;
		}
		Check();
	}
}

void XG()
{
begin:string find_name; Status i;
	cout << "��������Ҫ�޸ĵ�ѧ������:" << endl; cin >> find_name;
	for (i = 0; i<n; i++)
		if (Students[i].name == find_name)
		{
			cout << Students[i].name << " " << "�Ѿ��ҵ�:" << endl;
			cout << "ѧ����ѧ��:" << Students[i].number << ' '
				<< "����:" << Students[i].name << ' '
				<< "�����ɼ�:" << Students[i].Math << ' '
				<< "c++�ɼ�:" << Students[i].CPP << ' '
				<< "Ӣ��ɼ�:" << Students[i].Englist << ' '
				<< "��ʷ�ɼ�:" << Students[i].History << ' '
				<< "���γɼ�:" << Students[i].Politics << endl; break;
		}
	if (Students[i].name != find_name)
	{
		cout << "�Ҳ����������" << endl;
		cout << "�����²���!" << endl; goto begin;
	}
	Check();
	for (Status j = 0; j<n; j++)
	{
		cout << "�������µ���Ϣ:" << endl;
		cout << "ѧ�ţ�" << ' '; cin >> Students[j].number;
		cout << "������" << ' '; cin >> Students[j].name;
		cout << "�����ɼ���" << ' '; cin >> Students[j].Math;
		cout << "c++�ɼ���" << ' '; cin >> Students[j].CPP;
		cout << "Ӣ��ɼ���" << ' '; cin >> Students[j].Englist;
		cout << "��ʷ�ɼ���" << ' '; cin >> Students[j].History;
		cout << "���γɼ���" << ' '; cin >> Students[j].Politics;
		switch (choose)
		{
		case 0: main(); break; default:Check(); break;
		}
	}
}

void SC()

{
	Check();
	do {
		string SC_name;
		cout << "��������Ҫɾ����ѧ������:" << endl; Status i = 0; cin >> SC_name;
		while (Students[i].name != SC_name&&i<n) i++;                            //�����ж�
		if (Students[i].name == SC_name)
		{
			for (Status j = i; j<n - 1; j++)
			{
				Students[i].number = Students[i + 1].number;
				Students[i].name = Students[i + 1].name;
				Students[i].Math = Students[i + 1].Math;
				Students[i].CPP = Students[i + 1].CPP;
				Students[i].Englist = Students[i + 1].Englist;
				Students[i].History = Students[i + 1].History;
				Students[i].Politics = Students[i + 1].Politics;
			}
			cout << "ɾ���ɹ�!" << endl; n = n - 1;
		}
		else if (i == n) { cout << "������" << endl; cout << "ERROR" << endl; }
		cout << "(�Ƿ����������(y/n))" << endl; cin >> press;
	} while (press == 'y' || press == 'Y');
}

void wkcj()
{
	cout << "1.����" << endl;
	cout << "2.C++" << endl;
	cout << "3.Ӣ��" << endl;
	cout << "4.��ʷ" << endl;
	cout << "5.����" << endl;
	Check();
}

void km()
{
	do {
		Status find_number, c;
		cout << "��������Ҫ��ѯ��ѧ��:" << ' ';
		cin >> find_number; Status i;
		for (i = 0; i<n; i++)
			if (Students[i].number == find_number)
				cout << "������������ѡ��γ�" << endl;
		wkcj();
		cin >> c;
		switch (c)
		{
		case 1:cout << Students[i].name << '	' << Students[i].Math << endl;
		case 2:cout << Students[i].name << '	' << Students[i].CPP << endl;
		case 3:cout << Students[i].name << '	' << Students[i].Englist << endl;
		case 4:cout << Students[i].name << '	' << Students[i].History << endl;
		case 5:cout << Students[i].name << '	' << Students[i].Politics << endl;
		default:cout << "����������" << endl;
		}
		if (Students[i].number != find_number)
			cout << "�޷��ҵ���ѧ��" << endl;
		cout << "(�Ƿ����������(y/n))" << endl; cin >> press;
	} while (press == 'y' || press == 'Y');
	Check();
}

void ave()
{
	do {
		Status find_number;
		cout << "��������Ҫ��ѯ��ѧ��:" << ' ';
		cin >> find_number; Status i;
		for (i = 0; i<n; i++)
			if (Students[i].number == find_number)
			{
				cout << "ѧ��Ϊ" << Students[i].number << "��ѧ�����������ҵ�:" << endl;
				cout << Students[i].name << "��ƽ���ɼ�Ϊ" << (Students[i].Math + Students[i].CPP + Students[i].Englist + Students[i].History + Students[i].Politics) / 5 << endl; break;
			}
		if (Students[i].number != find_number)
			cout << "can't find this xm" << endl;
		cout << "(�Ƿ����������(y/n))" << endl; cin >> press;
	} while (press == 'y' || press == 'Y');
	Check();
}

void rate()
{
	Status i, s = 0, c;
	cout << "������ѡ��γ�" << endl;
	wkcj();
	cin >> c;
	Check();
	switch (c)
	{
	case 1: {for (i = 1; i <= MAXSIZE; i++) { if (Students[i].Math >= 60)	s = s + 1; if (i>MAXSIZE) s = s / MAXSIZE; }}
	case 2: {for (i = 1; i <= MAXSIZE; i++) { if (Students[i].CPP >= 60)	s = s + 1; if (i>MAXSIZE) s = s / MAXSIZE; }}
	case 3: {for (i = 1; i <= MAXSIZE; i++) { if (Students[i].Englist >= 60)	s = s + 1; if (i>MAXSIZE) s = s / MAXSIZE; }}
	case 4: {for (i = 1; i <= MAXSIZE; i++) { if (Students[i].History >= 60)	s = s + 1; if (i>MAXSIZE) s = s / MAXSIZE; }}
	case 5: {for (i = 1; i <= MAXSIZE; i++) { if (Students[i].Politics >= 60)	s = s + 1; if (i>MAXSIZE) s = s / MAXSIZE; }}
	}
	cout << "���ſγ̼�����Ϊ" << s << endl;
	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break; default:Check(); break;
	}
	Check();
}

void pj()
{
	Status i, c, s = 0;
	cout << "����������ѡ��γ�" << endl;
	wkcj();
	cin >> c;
	switch (c)
	{
	case 1: {
		for (i = 1; i <= MAXSIZE; i++)
			s = s + Students[i].Math;
		if (i>MAXSIZE) s = s / MAXSIZE; 
	}
			cout << "����ƽ���ɼ�" << s << endl; break;
	case 2: {for (i = 1; i <= MAXSIZE; i++) s = s + Students[i].CPP; if (i>MAXSIZE) s = s / MAXSIZE; }; cout << "C++ƽ���ɼ�" << s << endl; break;
	case 3: {for (i = 1; i <= MAXSIZE; i++) s = s + Students[i].Englist; if (i>MAXSIZE)	s = s / MAXSIZE; }; cout << "Ӣ��ƽ���ɼ�" << s << endl; break;
	case 4: {for (i = 1; i <= MAXSIZE; i++) s = s + Students[i].History; if (i>MAXSIZE)	s = (s / MAXSIZE); }; cout << "��ʷƽ���ɼ�" << s << endl; break;
	case 5: {for (i = 1; i <= MAXSIZE; i++) s = s + Students[i].Politics; if (i>MAXSIZE)	s = (s / MAXSIZE); }; cout << "����ƽ���ɼ�" << s << endl; break;
	}
	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break; default:Check(); break;
	}
	Check();
}

void min()
{
	Status i, m, c;
	cout << "������Ҫѡ��Ŀγ�" << endl;
	wkcj();
	cin >> c;
	switch (c)
	{
	case 1: {m = Students[0].Math; for (i = 1; i <= MAXSIZE; i++) { if (Students[i].Math<Students[0].Math)	m = Students[i].Math; }cout << "����" << Students[i].name << "��СֵΪ" << m; }; break;
	case 2: {m = Students[0].CPP; for (i = 1; i <= MAXSIZE; i++) { if (Students[i].CPP<Students[0].CPP)	m = Students[i].CPP; }cout << "����" << Students[i].name << "��СֵΪ" << m; }; break;
	case 3: {m = Students[0].Englist; for (i = 1; i <= MAXSIZE; i++) { if (Students[i].Englist<Students[0].Englist)	m = Students[i].Englist; }cout << "����" << Students[i].name << "��СֵΪ" << m; }; break;
	case 4: {m = Students[0].History; for (i = 1; i <= MAXSIZE; i++) { if (Students[i].History<Students[0].History)	m = Students[i].History; }cout << "����" << Students[i].name << "��СֵΪ" << m; }; break;
	case 5: {m = Students[0].Politics; for (i = 1; i <= MAXSIZE; i++) { if (Students[i].Politics<Students[0].Politics)	m = Students[i].Politics; }cout << "����" << Students[i].name << "��СֵΪ" << m; }; break;
	}
	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break; default:Check(); break;
	}
	Check();
}

void max()
{
	Status i, m, c;
	cout << "���������һѡ��γ�" << endl;
	wkcj();
	cin >> c;
	Check();
	switch (c)
	{
	case 1: {
		m = Students[0].Math;
		for (i = 1; i <= MAXSIZE; i++) { 
			if (Students[i].Math>Students[0].Math)
				m = Students[i].Math;
		}
		cout << "����" << Students[i].name << "���ֵΪ" << m; 
	}; break;
	case 2: {
		m = Students[0].CPP;
		for (i = 1; i <= MAXSIZE; i++) {
			if (Students[i].CPP>Students[0].CPP)	
				m = Students[i].CPP;
		}
		cout << "����" << Students[i].name << "���ֵΪ" << m;
	}; break;
	case 3: {
		m = Students[0].Englist;
		for (i = 1; i <= MAXSIZE; i++) {
			if (Students[i].Englist>Students[0].Englist)	
				m = Students[i].Englist;
		}
		cout << "����" << Students[i].name << "���ֵΪ" << m;
	}; break;
	case 4: {
		m = Students[0].History; 
		for (i = 1; i <= MAXSIZE; i++) {
			if (Students[i].History>Students[0].History)	
				m = Students[i].History;
		}
		cout << "����" << Students[i].name << "���ֵΪ" << m;
	}; break;
	case 5: {
		m = Students[0].Politics; 
		for (i = 1; i <= MAXSIZE; i++) { 
			if (Students[i].Politics>Students[0].Politics)	
				m = Students[i].Politics; 
		}
		cout << "����" << Students[i].name << "���ֵΪ" << m;
	}; break;
	}
	cout << "ENTER  0 BACK" << endl;
	Check();
	switch (choose)
	{
	case 0: main(); break; default:Check(); break;
	}
}
void ags()
{
	Check();
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].number>Students[i + 1].number)
			{
				g = Students[i].number;
				Students[i].number = Students[i + 1].number;
				Students[i + 1].number = g;
				na = Students[i].name;
				Students[i].name = Students[i + 1].name; 
				Students[i + 1].name = na;
				e = Students[i].Math;
				Students[i].Math = Students[i + 1].Math;
				Students[i + 1].Math = e;
			}
	cout << "ѧ����ѧ������:" << endl;
	cout << "ѧ��" << ' ' << "����" << ' ' << "��������" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].Math << endl; cout << endl;
	}
	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break; default:Check(); break;
	}
}
void bcjj()
{
	Status e, g; string na;
	Check();
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].number>Students[i + 1].number)
			{
				g = Students[i].number;
				Students[i].number = Students[i + 1].number;
				Students[i + 1].number = g;
				na = Students[i].name;
				Students[i].name = Students[i + 1].name;
				Students[i + 1].name = na;
				e = Students[i].CPP;
				Students[i].CPP = Students[i + 1].CPP;
				Students[i + 1].CPP = e;
			}cout << "ѧ����C++��������:" << endl;
	cout << "ѧ��" << ' ' << "����" << ' ' << "C++����" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].CPP << endl; cout << endl;
	}	cout << "ENTER  0 BACK" << endl;
	Check();
	switch (choose)
	{
	case 0: main(); break; default:Check(); break;
	}
}
void cyy()
{
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].number>Students[i + 1].number)
			{
				g = Students[i].number;
				Students[i].number = Students[i + 1].number;
				Students[i + 1].number = g;
				na = Students[i].name;
				Students[i].name = Students[i + 1].name;
				Students[i + 1].name = na;
				e = Students[i].Englist;
				Students[i].Englist = Students[i + 1].Englist;
				Students[i + 1].Englist = e;
			}cout << "ѧ����Ӣ���������:" << endl;
	cout << "ѧ��" << ' ' << "����" << ' ' << "Ӣ�����" << endl;
	Check();
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].Englist << endl;
		cout << endl;
	}	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break; default:Check(); break;
	}
}
void dls()
{
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].number>Students[i + 1].number)
			{
				g = Students[i].number;
				Students[i].number = Students[i + 1].number;
				Students[i + 1].number = g;
				na = Students[i].name;
				Students[i].name = Students[i + 1].name;
				Students[i + 1].name = na;
				e = Students[i].History;   Students[i].History = Students[i + 1].History;
				Students[i + 1].History = e;
			}cout << "ѧ������ʷ��������:" << endl;
	cout << "ѧ��" << ' ' << "����" << ' ' << "��ʷ����" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].History << endl; cout << endl;
	}	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break;
	default:Check(); break;
	}
}
void ezz()
{
	Check();
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].number>Students[i + 1].number)
			{
				g = Students[i].number;
				Students[i].number = Students[i + 1].number;
				Students[i + 1].number = g;
				na = Students[i].name;
				Students[i].name = Students[i + 1].name;
				Students[i + 1].name = na;
				e = Students[i].Politics;
				Students[i].Englist = Students[i + 1].Politics;
				Students[i + 1].Politics = e;
			}cout << "ѧ�������η�������:" << endl;
	cout << "ѧ��" << ' ' << "����" << ' ' << "���η���" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].Politics << endl; cout << endl;
	}	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break;
	default:Check(); break;
	}
}

void zt()
{
	Status c;
	cout << "��ѧ�������ɼ�" << endl;
	cout << "���������һѡ��γ�" << endl;
	wkcj();
	cin >> c;
	Check();
	switch (c)
	{
	case 1:ags(); break;
	case 2:bcjj(); break;
	case 3:cyy(); break;
	case 4:dls(); break;
	case 5:ezz(); break;
	case 0: main(); break;
	default:cout << "\t\t\t        ERROR BACK" << endl; break;
	}
}
void Math()
{
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].Math>Students[i + 1].Math)
			{
				g = Students[i].number;      Students[i].number = Students[i + 1].number;            Students[i + 1].number = g;
				na = Students[i].name;    Students[i].name = Students[i + 1].name;          Students[i + 1].name = na;
				e = Students[i].Math;   Students[i].Math = Students[i + 1].Math;       Students[i + 1].Math = e;
			}
	cout << "ѧ����������������:" << endl;
	cout << "ѧ��" << ' ' << "����" << ' ' << "��������" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].Math << endl; cout << endl;
	}
	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break;
	default:Check(); break;
	}
	Check();
}
void CPP()
{
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].CPP>Students[i + 1].CPP)
			{
				g = Students[i].number;      Students[i].number = Students[i + 1].number;            Students[i + 1].number = g;
				na = Students[i].name;    Students[i].name = Students[i + 1].name;          Students[i + 1].name = na;
				e = Students[i].CPP;   Students[i].CPP = Students[i + 1].CPP;       Students[i + 1].CPP = e;
			}cout << "ѧ����C++��������:" << endl;
	cout << "ѧ��" << ' ' << "����" << ' ' << "C++����" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].CPP << endl; cout << endl;
	}	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break;
	default:Check(); break;
	}
}
void Englist()
{
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].Englist>Students[i + 1].Englist)
			{
				g = Students[i].number; 
				Students[i].number = Students[i + 1].number;
				Students[i + 1].number = g;
				na = Students[i].name;
				Students[i].name = Students[i + 1].name;
				Students[i + 1].name = na;
				e = Students[i].Englist;
				Students[i].Englist = Students[i + 1].Englist;
				Students[i + 1].Englist = e;
			}cout << "ѧ����Ӣ���������:" << endl;
	cout << "ѧ��" << ' ' << "����" << ' ' << "Ӣ�����" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].Englist << endl; cout << endl;
	}	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break;
	default:Check(); break;
	}
}
void History()
{
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].History>Students[i + 1].History)
			{
				g = Students[i].number;    
				Students[i].number = Students[i + 1].number;
				Students[i + 1].number = g;
				na = Students[i].name;
				Students[i].name = Students[i + 1].name;
				Students[i + 1].name = na;
				e = Students[i].History;
				Students[i].History = Students[i + 1].History;
				Students[i + 1].History = e;
				Check();
			}cout << "ѧ������ʷ��������:" << endl;
	cout << "ѧ��" << ' ' << "����" << ' ' << "��ʷ����" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].History << endl; cout << endl;
	}	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break;
	}
}

void Politics()
{
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].Politics>Students[i + 1].Politics)
			{
				g = Students[i].number;
				Students[i].number = Students[i + 1].number;
				Students[i + 1].number = g;
				na = Students[i].name; 
				Students[i].name = Students[i + 1].name; 
				Students[i + 1].name = na;
				e = Students[i].Politics; 
				Students[i].Englist = Students[i + 1].Politics; 
				Students[i + 1].Politics = e;
			}cout << "ѧ�������η�������:" << endl;
	cout << "ѧ��" << ' ' << "����" << ' ' << "���η���" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].Politics << endl; cout << endl;
	}	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break;
	}
	Check();
}

void zj()
{
	Status c;
	cout << "���ɼ�����������" << endl;
	cout << "���������һѡ��γ�" << endl;
	wkcj();
	cin >> c;
	Check();
	switch (c)
	{
	case 1:Math(); break;
	case 2:CPP(); break;
	case 3:Englist(); break;
	case 4:History(); break;
	case 5:Politics(); break;
	case 0: main(); break;
	default:cout << "\t\t\t        ERROR,back" << endl; break;
	}
}

void Search()
{
	while (choose != 0) {
		cout << "---------------------------------------------------" << endl;
		cout << "1.��ѯĳѧ��ĳ�ſγɼ�������ѧ�ţ�����ɼ���" << endl;
		cout << "2.��ѯĳѧ��ƽ���ɼ�������ѧ�ţ�����ɼ���" << endl;
		cout << "0.����" << endl;
		cout << "---------------------------------------------------" << endl;
		cout << "����Ҫ���в����ı��" << endl;
		cin >> choose;
		Check();
		switch (choose)
		{
		case 1:km(); break;
		case 2:ave(); break;
		case 0: main(); break;
		default:cout << "\t\t        ERROR,back" << '\n'; break;
		}
	}
}
//Check();


void akc()
{
	while (choose != 0) {
		cout << "-----------------------------------------------------" << endl;
		cout << "1.ĳ�ſ�ƽ���ɼ�������γ̣����ƽ���ɼ�" << endl;
		cout << "2.ĳ�ſμ����ʣ�����γ̣���������ʣ�" << endl;
		cout << "3.ĳ�ſγ���С�ɼ�������γ̣������������С�ɼ���" << endl;
		cout << "4.ĳ�ſγ����ɼ�������γ̣�������������ɼ���" << endl;
		cout << "0.����" << endl;
		cout << "         ����0-4֮�������һ����    :" << endl;
		cout << "-----------------------------------------------------" << endl;
		cin >> choose;
		Check();
		switch (choose)
		{
		case 1: {pj(); Check();  } break;
		case 2: {rate(); Check(); } break;
		case 3: {min(); Check(); } break;
		case 4: {max(); Check(); } break;
		case 0: {main(); Check(); } break;
		default:cout << "\t\t        ERROR,back" << '\n'; break;
		}
	}
}

Status main()
{
	while (choose != 0); {

	//	cout << "��ѡ��Ҫִ�е�ְ�ܣ�1-4��" << endl;
		cout << "``````````````````````````````````````````````````" << endl;
		cout << "1.	��ѧ����ѯ" << endl;
		cout << "1��1	��ѯĳѧ��ĳ�ſγɼ�������ѧ�ţ�����ɼ���" << endl;
		cout << "1��2	��ѯĳѧ��ƽ���ɼ�������ѧ�ţ�����ɼ���" << endl;
		cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^* ^*^*^*^*^*^*^*^" << endl;

		cout << "2�����γ̲�ѯ" << endl;
		cout << "2��1 ��ѯĳ�ſ�ƽ���ɼ�������γ̣����ƽ���ɼ���" << endl;
		cout << "2��2 ��ѯĳ�ſμ����ʣ�����γ̣���������ʣ�" << endl;
		cout << "2��3 ��ѯĳ�ſγ���С�ɼ�������γ̣������������С�ɼ�" << endl;
		cout << "2��4 ��ѯĳ�ſγ����ɼ�������γ̣�������������ɼ���" << endl;
		cout << "2��5 ��ĳ�ſγ̰�ѧ�Ŵ�С��������ɼ����������������ѧ�š��ɼ���" << endl;
		cout << "2��6 ��ĳ�ſγ̰��ɼ���С��������ɼ����������������ѧ�š��ɼ���" << endl;
		cout << "*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*" << endl;

		cout << "3. ���ѧ������Ӧ�γ̳ɼ�" << endl;
		cout << "!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^" << endl;

		cout << "4. ɾ��ѧ������Ӧ�γ̳ɼ�" << endl;

		cout << "~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~" << endl;
		cout << "~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~" << endl;
		cout << "~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~\n\n\n" << endl;

		cout << "**---------------------------------------------------**" << endl;
		cout << "=====1.����30��ѧ���ĳɼ�               =====" << endl;
		cout << "=====2.ѧ���ɼ���ѯ                     =====" << endl;
		cout << "=====3.�γ̳ɼ���ѯ                     =====" << endl;
		cout << "=====4.���ѧ������Ӧ�γ̳ɼ�           =====" << endl;
		cout << "=====5.ɾ��ѧ������Ӧ�γ̳ɼ�           =====" << endl;
		cout << "=====6.��ĳ�ſγ̰�ѧ�Ŵ�С��������ɼ� =====" << endl;
		cout << "=====7.��ĳ�ſγ̰��ɼ���С��������ɼ� =====" << endl;
		cout << "0.����" << endl;
		cout << "=====    ������0-7֮�������һ����     =====" << endl;
		cout << "**---------------------------------------------------***" << endl;
		cin >> choose;
		switch (choose)
		{
		case 1: {
			input();
			Check();
		}; break;
		case 2: {
			Search();
			Check();
		} break;
		case 3: {
			Check();
			akc();
		}; break;
		case 4: { 
			SC();
			Check(); 
		}; break;
		case 5: {
			XG();
			Check();
		} break;
		case 6: {
			zt(); 
			Check(); 
		} break;
		case 0: {
			Check(); 
			exit(0);
		} break;
		case 7: {
			zj();
			Check();
		} break;
		default:cout << "\t\t\t        ERROR,back" << endl; break;
		}
	}

	return 0;
}