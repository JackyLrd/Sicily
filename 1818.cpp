#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	int T,n,i,j,k,m,scr;
	char x;
	map<string,int> data;
	cin>>T;
	while(T--)
	{
		string name;
		map<string, int>::iterator it; 
		cin>>n>>m;
		for(i=0;i<n;i++)
		{
			cin>>name>>scr;
			if(scr<=100&&scr>=90) data[name]=1;
			else if(scr<=89&&scr>=80) data[name]=2;
			else if(scr<=79&&scr>=70) data[name]=3;
			else if(scr<=69&&scr>=60) data[name]=4;
			else if(scr<=59&&scr>=0) data[name]=5;
			else data[name]=6;
		}
		for(i=0;i<m;i++)
		{
			cin>>name;
			it=data.find(name);
			if(it!=data.end())
			{
				k=it->second;
				if(k!=6)
				{
					x='A'+k-1;
					cout<<x<<endl;
				}
				else
				{
					cout<<"Score is error!"<<endl;
				}
			} 
		}		
	}
	return 0;
}
