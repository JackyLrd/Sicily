#include <iostream>
#include <string>

using namespace std; 

struct BT
{
	char data;
	BT* lc;
	BT* rc;
	BT* pr;
};

BT* func(BT* pr, string pre, string in, int len)
{
	if(len == 0)
	{
		return NULL;
	}
	else
	{
		auto node = new BT;
		node->data = pre[0];
		node->pr = pr;
		int len1 = in.find(pre[0]);
		int len2 = pre.size() - len1 - 1;
		node->lc = func(node, pre.substr(1, len1), in.substr(0, len1), len1);
		node->rc = func(node, pre.substr(len1 + 1, len2), in.substr(len1 + 1, len2), len2);
		return node;
	}
}
void mid(BT* p)
{
	if(p->lc != NULL)
		mid(p->lc);
	cout << p->data;
	if(p->rc != NULL)
		mid(p->rc);
}
void pre(BT* p)
{
	cout << p->data;
	if(p->lc != NULL)
		pre(p->lc);
	if(p->rc != NULL)
		pre(p->rc);
}
void BFS(BT* p)
{
	if(p->lc != NULL)
	{
		cout << p->lc->data;
	}
	if(p->rc != NULL)
	{
		cout << p->rc->data;
	}
	if(p->lc != NULL)
	{
		if(p->lc->lc != NULL || p->lc->rc != NULL)
			BFS(p->lc);
	}
	if(p->rc != NULL)
	{
		if(p->rc->lc != NULL || p->rc->rc != NULL)
			BFS(p->rc);
	}
}
int main()
{
	int n;
	cin >> n;
	string s1, s2;
	while(n--)
	{
		cin >> s1 >> s2;
		auto p = func(NULL, s1, s2, s1.size());
		cout << p->data;
		BFS(p);
		cout << endl;
		delete[] p;
	}
}
