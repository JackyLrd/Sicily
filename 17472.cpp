#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class node
{
public:
	node(){}
	node(int a,int b)
	{
		r=a;
		s=b;
	}
	int r,s;
	bool operator<(const node &x)const
	{
		if(r>x.r)
		return true;
		else if(r==x.r)
			return s<x.s;
		else return false;
	}
};

int main()
{
	int t,m,n,x,y;
	cin>>t;
	while(t--)
	{
		bool mark=1;
		cin>>m>>n;
		vector<node> v;
		for(int i=0;i<n;i++)
		{
			cin>>x>>y;
			node temp(x,y);
			v.push_back(temp);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++)
		{
			if(m>=v[i].r)
				m-=v[i].s;
			else 
			{
				mark=0;break;
			}
		}
		if(mark) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
