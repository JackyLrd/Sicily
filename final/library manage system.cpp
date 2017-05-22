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
	cout<<"添加成功"<<endl;
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
		cout<<"您所要删除的书不存在"<<endl;	
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
	cout<<"删除成功"<<endl;
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
				cout<<"抱歉！您所要借阅的书已经被借阅完了"<<endl;
			}
			else
			{
				book[i].num--;
				book[i].isbro=1;
				cout<<"借阅成功"<<endl; 
			}
			break;
		}
	}
	if(i==lastbook+1)
		cout<<"您所要借阅的书不存在"<<endl;
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
			cout<<"归还成功"<<endl;
			break;
		}
	}
	if(i==lastbook+1)
		cout<<"添加书目请选择功能 2"<<endl;
	system("pause");
}
void Check()
{
	cout<<"书名      数目"<<endl; 
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
			cout<<"《"<<str<<"》";
			
			cout<<" 共有 "<<book[i].total<<" 本，还剩 "<<book[i].num<<" 本"<<endl;
			break;
		}
	}
	if(i==lastbook+1)
	{
		cout<<"您所查找的书目不存在"<<endl; 
	}
	system("pause");
}
void UI()
{
	system("cls");
	cout<<"LRD图书管理系统"<<endl<<endl;
	Check();
	int x;
	cout<<"请输入对应标号选择功能"<<endl;
	cout<<"1.查找书目"<<endl;
	cout<<"2.添加/删除 书目"<<endl;
	cout<<"3.借阅/归还 书目"<<endl;
	cout<<"4.退出系统"<<endl;
	cin>>x;
	system("cls");
	cout<<"LRD图书管理系统"<<endl<<endl;
	if(x==1)
	{
		string str;
		cout<<"请输入想要查找的书名"<<endl;
		cin>>str;
		CheckBook(str);
	}
	if(x==2)
	{
		int x;
		string str;
		cout<<"请输入对应标号选择功能"<<endl;
		cout<<"1.添加书目"<<endl;
		cout<<"2.删除书目"<<endl;
		cin>>x;
		if(x==1)
		{
			cout<<"请输入想要添加的书名"<<endl;
			cin>>str; 
			AddBook(str);
		}
		else
		{
			cout<<"请输入想要删除的书名"<<endl;
			cin>>str;
			DelBook(str);
		}
		system("cls");
	}
	if(x==3)
	{
		int x;
		string str;
		cout<<"请输入对应标号选择功能"<<endl;
		cout<<"1.借阅书目"<<endl;
		cout<<"2.归还书目"<<endl;
		cin>>x;
		if(x==1)
		{
			cout<<"请输入想要借阅的书名"<<endl;
			cin>>str; 
			BroBook(str);
		}
		else
		{
			cout<<"请输入想要归还的书名"<<endl;
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
	booklist2<<"图书目录";
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
