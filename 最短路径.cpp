#include <iostream>
#include <memory.h>
#include <stdio.h>

using namespace std;

bool pt[30001][30001];

void wsfunc(bool arr[][30001], int num)
{
	for(int k = 1; k <= num; k++)
	{
		for(int i = 1; i <= num; i++)
		{
			for(int j = 1 ; j <= num; j++)
			{
				if(arr[i][j] || (arr[i][k] && arr[k][j]))
					arr[i][j] = true;
			}
		}
	}
}

int main()
{
	int N, M, K, temp1, temp2, count = 0;
	cin >> N >> M >> K;
	memset(pt, 0, sizeof(pt));
	for(int i = 0; i < M; i++)
	{
		cin >> temp1 >> temp2;
		pt[temp1][temp2] = 1;
		pt[temp2][temp1] = 1;
	}
	for(int i = 0; i < K; i++)
	{
		cin >> temp1;
		for(int j = 1; j <= N ;j++)
		{
			pt[j][temp1] = 0;
			pt[temp1][j] = 0;
		}
	}
	//wsfunc(pt, N);
	for(int j = 2; j <= N ;j++)
	{
		if(pt[1][j] == 1);
		else count++;
	}
	cout << count << endl;
}
