#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
using namespace std;
struct Book
{
	string name;
	bool isbro=0;
	int num=0;
	int total=0;
};
Book book[101];
int lastbook=0,exsys=0;
void AddBook(string str)
{
	int i;
	for(i=1;i<=lastbook;i++)
	{
		if(str==book[i].name)
		{
			book[i].num++;
			book[i].total++;
			break;
		}
	}
	if(i==lastbook+1)
	{
		book[i+1]=book[i];
		book[i].name=str;
		book[i].num++;
		book[i].total++;
		lastbook++;
	}
	cout<<"��ӳɹ�"<<endl;
	system("pause");
}
void DelBook(string str)
{
	int i;
	for(i=1;i<=lastbook;i++)
	{
		if(str==book[i].name)
		{
			book[i].num--;
			book[i].total--;
			break;
		}
	}
	if(i==lastbook+1)
	{
		cout<<"����Ҫɾ�����鲻����"<<endl;	
	}
	if(book[i].total==0)
	{
		for(;i<lastbook;i++)
		{
			book[i]=book[i+1];
		}
		lastbook--;
		book[lastbook+1]=book[lastbook+2];
	}
	cout<<"ɾ���ɹ�"<<endl;
	system("pause");
}
void BroBook(string str)
{
	int i;
	for(i=1;i<=lastbook;i++)
	{
		if(str==book[i].name)
		{
			if(book[i].num==0)
			{
				cout<<"��Ǹ������Ҫ���ĵ����Ѿ�����������"<<endl;
			}
			else
			{
				book[i].num--;
				book[i].isbro=1;
				cout<<"���ĳɹ�"<<endl; 
			}
			break;
		}
	}
	if(i==lastbook+1)
		cout<<"����Ҫ���ĵ��鲻����"<<endl;
	system("pause");
}
void RetBook(string str)
{
	int i;
	for(i=1;i<=lastbook;i++)
	{
		if(str==book[i].name)
		{
			book[i].num++;
			book[i].isbro=0;
			cout<<"�黹�ɹ�"<<endl;
			break;
		}
	}
	if(i==lastbook+1)
		cout<<"�����Ŀ��ѡ���� 2"<<endl;
	system("pause");
}
void Check()
{
	cout<<"����      ��Ŀ"<<endl; 
	for(int i=1;i<=lastbook;i++)
	{
		cout<<left<<setw(10)<<book[i].name;
		cout<<book[i].num<<"/"<<book[i].total<<endl;;
	}
	cout<<endl<<endl<<endl<<endl<<endl;
}
void CheckBook(string str)
{
	int i;
	for(i=1;i<=lastbook;i++)
	{
		if(str==book[i].name)
		{
			cout<<"��"<<str<<"��";
			
			cout<<" ���� "<<book[i].total<<" ������ʣ "<<book[i].num<<" ��"<<endl;
			break;
		}
	}
	if(i==lastbook+1)
	{
		cout<<"�������ҵ���Ŀ������"<<endl; 
	}
	system("pause");
}
void UI()
{
	system("cls");
	cout<<"LRDͼ�����ϵͳ"<<endl<<endl;
	Check();
	int x;
	cout<<"�������Ӧ���ѡ����"<<endl;
	cout<<"1.������Ŀ"<<endl;
	cout<<"2.���/ɾ�� ��Ŀ"<<endl;
	cout<<"3.����/�黹 ��Ŀ"<<endl;
	cout<<"4.�˳�ϵͳ"<<endl;
	cin>>x;
	system("cls");
	cout<<"LRDͼ�����ϵͳ"<<endl<<endl;
	if(x==1)
	{
		string str;
		cout<<"��������Ҫ���ҵ�����"<<endl;
		cin>>str;
		CheckBook(str);
	}
	if(x==2)
	{
		int x;
		string str;
		cout<<"�������Ӧ���ѡ����"<<endl;
		cout<<"1.�����Ŀ"<<endl;
		cout<<"2.ɾ����Ŀ"<<endl;
		cin>>x;
		if(x==1)
		{
			cout<<"��������Ҫ��ӵ�����"<<endl;
			cin>>str; 
			AddBook(str);
		}
		else
		{
			cout<<"��������Ҫɾ��������"<<endl;
			cin>>str;
			DelBook(str);
		}
		system("cls");
	}
	if(x==3)
	{
		int x;
		string str;
		cout<<"�������Ӧ���ѡ����"<<endl;
		cout<<"1.������Ŀ"<<endl;
		cout<<"2.�黹��Ŀ"<<endl;
		cin>>x;
		if(x==1)
		{
			cout<<"��������Ҫ���ĵ�����"<<endl;
			cin>>str; 
			BroBook(str);
		}
		else
		{
			cout<<"��������Ҫ�黹������"<<endl;
			cin>>str;
			RetBook(str);
		}
	}
	if(x==4)
	{
		exsys=1;
	}
}
void Initialize()
{
	char in[200];
	int num=0,i;
	ifstream booklist("booklist.txt");
	booklist.getline(in,100);
	while(!booklist.eof())
	{
		num++;
		booklist.getline(in,100);
		book[num].name=in;
		booklist.getline(in,100);
		book[num].num=in[0]-48;
		booklist.getline(in,100);
		book[num].isbro=in[0]-48;
		booklist.getline(in,100);
		book[num].total=in[0]-48;
	}
	booklist.close();
	lastbook=num;
}
void Save()
{
	ofstream booklist2("booklist.txt",ios::out);
	booklist2<<"ͼ��Ŀ¼";
	for(int i=1;i<=lastbook;i++)
	{
		booklist2<<endl;
		booklist2<<book[i].name<<endl<<book[i].num<<endl<<book[i].isbro<<endl<<book[i].total;
	}
	booklist2.close();
} 
int main(void)
{
	Initialize();
	while(exsys==0)
	{
		UI();
		Save();
	}
	return 0;
}
