#include <iostream>
#include <stack>
#include <string>
#include <queue>

using namespace std;
bool cmp(char a, char b)
{
	if(a == '+' || a == '-')
	{
		if(b == '+' || b == '-')
		{
			return false;
		}
		else return false;
	}
	else
	{
		if(b == '+' || b == '-')
		{
			return true;
		}
		else return false;
	}
}
int main()
{
	char q = '+', w = '-', e = '*', r = '/', t = '%';
	string str;
	stack <char> temp;
	stack <char> out;
	int T;
	cin >> T;
	while(T--)
	{
		cin >> str;
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] == q || str[i] == w || str[i] == e || str[i] == r || str[i] == t)
			{
				while(1)
				{
					if(temp.empty() || temp.top() == '(')
					{
						temp.push(str[i]);
						break;
					} 
					else
					{
						if(cmp(str[i], temp.top()))
						{
							temp.push(str[i]);
							break;
						}
						else	
						{
							out.push(temp.top());
							temp.pop();
						}
					}	
				}	
			}	
			else
			{
				if(str[i] == '(')
				{
					temp.push(str[i]);
				}
				else if(str[i] == ')')
				{
					while(temp.top() != '(')
					{
						out.push(temp.top());
						temp.pop();
					}
					temp.pop();
				}
				else
				{
					out.push(str[i]);
				}
			}
		}	
		while(!temp.empty())
		{
			out.push(temp.top());
			temp.pop();
		}
		while(!out.empty())
		{
			temp.push(out.top());
			out.pop();
		}
		while(!temp.empty())
		{
			cout << temp.top();
			temp.pop();
		}
		cout << endl;
	}
}	
