#include<iostream>
#include<cmath>
#include<string>
using namespace std;

bool IsPrime(int test)
{
	if(test <= 1)//0,1��������
		return false;
	for(int i = 2; i <= sqrt((double)test); i++)
	{
		if(test % i == 0)
			return false;
	}
	return true;
}

int main()
{
	string word;
	while(cin >> word)//ֻҪ�е�������ͼ����ж�
	{
		int counter[26] = {0};//��ʾÿ����ĸ���ֵĴ�����[0]����a��
		for(int i = 0; i < word.length(); i++)//ͳ�ƴ���
		{
			//'a'��ASCII ֵΪ97
			counter[word[i] - 97]++;
		}
		int max = 0;
		int min = 100;//����Ϊ100
		for(int i = 0; i < 26; i++)//�ҳ������Сֵ
		{
			if(counter[i] > max)
				max = counter[i];

			if(counter[i] < min && counter[i] != 0)
				min = counter[i];
		}
		if(max == word.length())//********�ؼ�
			min = max;
		int interval = max - min;
		if(IsPrime(interval))
		{
			cout << "Lucky Word" << endl;
			cout << interval << endl;
		}
		else
		{
			cout << "No Answer" << endl;
			cout << 0 << endl;
		}
	}
}
