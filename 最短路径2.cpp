#include <iostream>
#include <map>
#include <string>
#include <memory.h>

using namespace std;

int pt[1001][1001];

int min(int a, int b)
{
    return a > b ? b : a;
}

void wsfunc(int arr[][1001], int num)
{
	for(int k = 1; k <= num; k++)
	{
		for(int i = 1; i <= num; i++)
		{
			for(int j = 1 ; j <= num; j++)
			{
				arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
			}
		}
	}
}

int main()
{
	int c, n, d, k, temp;
	cin >> c;
	while(c--)
	{
		cin >> n;
		string a, b;
		map <string, int> mp;
		k = 1;
		for(int i = 0; i <= 1000; i++)
		{
			for(int j = 0; j <= 1000; j++)	
			{
				pt[i][j] = 99999999;
			}
		}
		for(int i = 0; i < n; i++)
		{
			cin >> a >> b >> d;
			temp = mp.size();
			mp.insert(pair <string, int> (a, k));
			if(temp == mp.size());
			else k++;
			temp = mp.size();
			mp.insert(pair <string, int> (b, k));
			if(temp == mp.size());
			else k++;
			pt[mp[a]][mp[b]] = d < pt[mp[a]][mp[b]] ? d : pt[mp[a]][mp[b]];
            pt[mp[b]][mp[a]] = d < pt[mp[b]][mp[a]] ? d : pt[mp[b]][mp[a]];
		}
		wsfunc(pt, mp.size());
		cin >> a >> b;
		if (a == b) {
            cout << 0 << endl;
            continue;
        }
		if (mp.find(a) == mp.end() || mp.find(b) == mp.end()) {
            cout << -1 << endl;
            continue;
        }
		cout << (pt[mp[a]][mp[b]] >= 99999999 ? -1 : pt[mp[a]][mp[b]]) << endl;
	}
}
