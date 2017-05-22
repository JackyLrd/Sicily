#include <iostream>
#include <stack>
using namespace std;
int arr[200002];
int main(void)
{
	int a,b,n,i,m;
	cin>>m;
	while(m--)
	{
		cin>>n;
		stack<int> st;
		for(i=0;i<n;i++)
		{
			cin>>a>>b;
			arr[a]=b;
			arr[b]=a;
		}
		for(i=1;i<=2*n;i++)
		{
			if(!st.empty()&&st.top()==arr[i])
			{
				st.pop();
			}
			else
			{
				st.push(i);
			}
		}
		if(st.empty())
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
