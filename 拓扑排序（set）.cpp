#include <iostream>
#include <vector>
#include <set> 
using namespace std;

vector <int> a[100010];
int into[100010];

void topsort(int n)         
{
	int i, j;
	set <int> s;
	for(i = 1; i <= n; i++)
	{
		if(into[i] == 0)
		{
			s.insert(i);
		}
	}
	while(!s.empty())
	{
		auto i = *s.begin();
		s.erase(s.begin());
		cout << i << " ";
		for(j = 0; j < a[i].size(); j++)
		{
			into[a[i][j]]--;
			if(into[a[i][j]] == 0)
				s.insert(a[i][j]);
		}
	}
	cout << endl;
}
int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int i, x, y, n, m;
		cin >> n >> m;
		for(i = 1; i <= n; i++)
		{
			a[i].clear();
			into[i] = 0;
		}
		for(i = 1; i <= m; i++)
		{
			cin >> x >> y;
			a[x].push_back(y);
			into[y]++;      
		}
		topsort(n);
	}
	return 0;
}
