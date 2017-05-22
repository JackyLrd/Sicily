#include<iostream>
#include<queue>
using namespace std;

struct Node
{
	int snum;//学号
	int chinese;
	int math;
	int english;
	int sum;//总分
};

struct cmp
{
	bool operator()(Node n1, Node n2)
	{
		if(n1.sum != n2.sum)
		{
			return n1.sum < n2.sum;
		}
		else
		{
			if(n1.chinese != n2.chinese)//总分相同，比较语文成绩
			{
				return n1.chinese < n2.chinese;
			}
			else
			{
				return n1.snum > n2.snum;//小学号的优先
			}
		}
	}
};

int main()
{
	int num;
	bool flag = false;
	while(cin >> num)
	{
		if(flag)
			cout << endl;
		flag = true;
		priority_queue<Node, vector<Node>, cmp> Q;
		for(int i = 1; i <= num; i++)
		{
			Node n;
			cin >> n.chinese;
			cin >> n.math;
			cin >> n.english;
			n.snum = i;//学号
			n.sum = n.chinese + n.math + n.english;
			Q.push(n);
		}

		for(int i = 1; i <= 5; i++)
		{
			cout << Q.top().snum << " " << Q.top().sum << endl;
			Q.pop();
		}
	}
	return 0;
}
