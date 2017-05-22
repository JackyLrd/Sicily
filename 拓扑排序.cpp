#include <iostream>
using namespace std;

int a[10001][301]={0};
int into[10001];
int ans[10001];
int m,n,money;

void init()
{
	int i,x,y;
	cin>>n>>m;
	for(i=1;i<=m;i++)
	{
		cin>>x>>y;
		a[y][0]++;      
		a[y][a[y][0]]=x;
		into[x]++;      
	}
}
bool topsort()         
{
	int t,tot,k,i,j;
	tot=0;
	k=0;
	while(tot<n)   
	{
		t=0;         
		for(i=1;i<=n;i++)
		{
			if(into[i]==0)
			{
				tot++;
				t++;
				money+=100;
				ans[t]=i;
				into[i]=0xffffffff;
			}
		}
		if(t==0) 
			return false;
		money+=k*t;
		k++;
		for(i=1;i<=t;i++)
			for(j=1;j<=a[ans[i]][0];j++)
				into[a[ans[i]][j]]--;
	}
	return true;
}
int main()
{
	init();
	money=0;
	if(topsort())
		cout<<money<<endl;
	else 
		cout<<"Poor Xed"<<endl;
	return 0;
}
