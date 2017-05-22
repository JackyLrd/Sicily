#include <iostream>
#include <memory.h>
#include <vector>

using namespace std;

struct node
{
	int d;
	int to;
	node(int dis, int t)
	{
		d = dis;
		to = t;
	}
};

void dfs(vector<node>* arr, int st, int d[10001])
{
	for(int i = 0; i < arr[st].size(); i++)
	{
		if(d[arr[st][i].to] == 0)
		{
			d[arr[st][i].to] += (d[st] + arr[st][i].d);
			dfs(arr, arr[st][i].to, d);
		}
	}
}

int dis[10001];

int main()
{
	int n, k, a, b, d, max;
	while(cin >> n >> k)
	{
		vector <node> pt[n + 1];
		max = 0;
		memset(dis, 0, sizeof(dis));
		for(int i = 1; i < n; i++)
		{
			cin >> a >> b >> d;
			pt[a].push_back(node(d, b));
			pt[b].push_back(node(d, a));
		}
		/*for(int i = 1; i <= n; i++)
		{
			dis[i] = ;
		}*/
		dis[k] = 1;
		dfs(pt, k, dis);
		for(int i = 1; i <= n; i++)
		{
			//cout << dis[i] << endl;
			if(dis[i] > max)
				max = dis[i];
		}
		cout << max - 1<< endl;
	}
}
