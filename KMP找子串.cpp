#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int* getnext(int  arr[1000000], int len)
{
	int j = 0;
	int* next = new int[len + 1];
	next[0] = 0;
	next[1] = 0;
	for(int i = 1; i < len; i++)
	{
		while(j > 0 && arr[i] != arr[j])
			j = next[j];
		if(arr[i] == arr[j])
			j++;
		next[i + 1] = j;
	}
	return next;
}
void search(int pro[1000000], int code[1000000], int next[], int prolen, int codelen)
{
	int i, j = 0;
	for(i = 0; i < prolen; i++)
	{
		while(j > 0 && pro[i] != code[j])
			j = next[j];
		if(pro[i] == code[j])
			j++;
		if(j == codelen)
		{
			printf("%d\n", i - j + 1);
			j = next[j];
			break;
		}
	}
	if(i == prolen) printf("no solution\n");
}

int code[1000000], pro[1000000];
int main()
{
	int n, m, i;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
		{
			scanf("%d", &code[i]);
		}
		scanf("%d", &m);
		for(i = 0; i < m; i++)
		{
			scanf("%d", &pro[i]);
		}
		int *next = getnext(code, n);
		search(pro, code, next, m, n);
	}
}
