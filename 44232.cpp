// Problem#: 4423
// Submission#: 3751511
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int freq[20];

int main()
{
	int test, n, i, j, data;
	long long sum;
	scanf("%d", &test);
	while (test--)
	{
		memset(freq, 0, sizeof(freq));
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			scanf("%d", &data);
			for (j = 0; data != 0; j++)
			{
				if (data & 1)
					freq[j]++;
				data >>= 1;
			}
		}
		sum = 0;
		for (i = 0; i < 20; i++)
			sum += (long long)freq[i] * (n - freq[i]) << i;
		printf("%lld\n", sum);
	}
}                                 
