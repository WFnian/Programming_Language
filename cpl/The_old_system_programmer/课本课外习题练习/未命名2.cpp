#include <fstream>
#include <iostream.h>

using namespace std;

const int DefaultListSize = 100; 

template <class Elem> 
class Aqueue
{
private:
   int maxSize;
   int listSize;
   int tail;
   Elem* listArray;
public:
 Aqueue();
 virtual ~Aqueue();
 bool append(const Elem&); 
 bool remove(Elem&);
 bool deleteone(int pos);
 bool find(Elem&);
 bool sort();
 void print() const;
 void save()
 {
  ofstream outfile("data.dat",  ios::out);
  outfile<<listSize<<" ";
  for(int i=0; i<listSize; i++)
   outfile<<listArray[i]<<" ";
  outfile.close();
 }
};

template <class Elem>
Aqueue<Elem>::Aqueue()  //��ʼ������
{
 maxSize=DefaultListSize;
 listArray=new Elem[maxSize];
 listSize = 0;
 ifstream infile("data.dat", ios::in|ios::nocreate);
 if(!infile)
  listSize = 0;
 else

 {
  int i = 0;
  infile>>listSize;
  while(i < listSize)
  {
   infile>>listArray[i++];
  }
 }
} // Aqueue()

template <class Elem>                            //��������
Aqueue<Elem>::~Aqueue()
{
 delete [] listArray;
} // ~Aqueue

template <class Elem>                           //��ӡ����Ԫ��
void Aqueue<Elem>::print() const
{
 int t=0;     
 cout<<"<";
 while(t<listSize)
  cout<<listArray[t++]<<" "; 
 cout<<">\n";
} // print

template <class Elem>                           //׷��Ԫ��
bool Aqueue<Elem>:: append(const Elem&item)
{
 if(listSize==maxSize)
  return false;
 listArray[listSize++]=item;
 return true;
} // append

template <class Elem>                            //ɾ��ĳλ�õ�Ԫ��
bool Aqueue<Elem>:: deleteone(int pos)
{
 if(listSize==0)
  return false;  
 for(int i=pos;i<listSize-1;i++)
  listArray[i]=listArray[i+1];
 listSize--;   
 return true;  
} // remove

template <class Elem>                           //�Ƴ�ֵΪit��Ԫ��
bool Aqueue<Elem>:: remove(Elem& it)
{
 if(listSize==0)
  return false;
 int pos = 0;
 while(it != listArray[pos])
 {
  pos++;
  if(pos >= listSize)
   return false;
 }
 for(int i=pos;i<listSize-1;i++)
  listArray[i]=listArray[i+1];
 listSize--;
 return true;  
} // remove

template <class Elem>                 //����it�Ƿ��ڶ�����
bool Aqueue<Elem>::find(Elem& it)
{
 int i = 0;
 while(it != listArray[i])
 {
  i++;
  if(i >= listSize)
   return false;
 }
 return true;
}

template <class Elem>         //�Զ���Ԫ����������
bool Aqueue<Elem>::sort()
{
 if(listSize == 0)
  return false;
 Elem temp;
 for(int i=1; i<listSize; i++)
  for(int j=i; (j>0)&&(listArray[j]<listArray[j-1]); j--)
  {
   temp = listArray[j];
   listArray[j] = listArray[j-1];
   listArray[j-1] = temp;
  }
 return true;
}

int main()
{
 Aqueue<int> queue;
 int data,input,check;
 cout<<"1����������"<<endl;
 cout<<"2����ֵɾ������"<<endl;
 cout<<"3����λ��ɾ������"<<endl;
 cout<<"4����������"<<endl;
 cout<<"5���鿴����"<<endl;
 cout<<"0���˳�"<<endl;
 do
 {
  do
  {
   cout<<"��ѡ�������";
   cin>>input;
   if(cin.good())
   {
    if(input == 0 || input == 1 || input == 2 || input == 3 || input == 4 || input == 5)
     check = 0;
    else
    {
     cout << "û�и�ѡ�" << endl;
     check = 1;
    }
   }
   else
   {
    cin.clear();
    cin.sync();
    cout << "�벻Ҫ�����ַ���" <<endl;
    check = 1;
   }
  }
  while(check);
  switch(input)
  {
  case 1:
   {
    cout<<"���������ݣ�"<<endl;
    cin>>data;
    if(queue.append(data))
     cout<<"����ɹ���";
    else
     cout<<"����ʧ�ܣ�";
    break;
   }
  case 2:
   {
    cout<<"��������ֵ��"<<endl;
    cin>>data;
    if(queue.remove(data))
     cout<<"ɾ���ɹ���";
    else
     cout<<"ɾ��ʧ�ܣ�";
    break;
   }
  case 3:
   {
    cout<<"������λ�ã�"<<endl;
    cin>>data;
    if(queue.deleteone(data))
     cout<<"ɾ���ɹ���";
    else
     cout<<"ɾ��ʧ�ܣ�";
    break;
   }
  case 4:
   {
    if(queue.sort())
     cout<<"������ɣ�";
    else
     cout<<"ɾ��ʧ�ܣ�";
    break;
   }
  case 5:
   {
    queue.print();
    break;
   }
  case 0:
   {
    queue.save();
    break;
   }
  }
 }
 while(input != 0);
 return 0;
}
