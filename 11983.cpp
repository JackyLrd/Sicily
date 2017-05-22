#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const string a, const string b)
{
    return a +b < b + a;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<string>s;
		int n;
		cin>>n;
		string temp;
		while(n--)
		{
			cin>>temp;
			s.push_back(temp);
		}
		sort(s.begin(),s.end(),cmp);
		for(int i=0;i<s.size();i++)
			cout<<s[i];
		cout<<endl;
	}
	return 0;
}

