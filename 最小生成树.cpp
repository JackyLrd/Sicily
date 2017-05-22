#include <iostream>
#include <memory.h>
#include <queue>
#include <vector>

using namespace std;

unsigned short pt[500][500];
bool is_out[501];

int prim(int n)
{
	int k = 500;
	int l;
	int max = 0;
	int min = 65536;
	vector <int> v;
	v.push_back(0);
	for(int i = 0; i < n; i++)
	{
		if(min > pt[0][i] && is_out[i] != true && i != 0)
		{
			min = pt[0][i];
			k = i;
			l = 0;
		}
	}
	is_out[0] = true;
	is_out[k] = true;
	max = max > pt[l][k] ? max : pt[l][k];
	v.push_back(k);
	while(v.size() < n)
	{
		k = 500;
		min = 65536;
		for(int i = 0; i < v.size(); i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(min > pt[v[i]][j] && is_out[j] != true && j != v[i])
				{
					min = pt[v[i]][j];
					k = j;
					l = v[i];
				}
			}
		}
		is_out[k] = true;
		max = max > pt[l][k] ? max : pt[l][k];
		v.push_back(k);
	}
	return max;
}

int main()
{
	int T, n, k = 0;
	cin >> T;
	while(T--)
	{
		cin >> n;
		memset(is_out, 0, sizeof(is_out));
		memset(pt, 0, sizeof(pt));
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cin >> pt[i][j];
			}
		}
		if(k!=0)
    	cout<<endl;
		cout << prim(n) << endl;
		k++;
	}
}
