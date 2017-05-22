#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	string str;
	while(cin>>str)
	{
		int sum=(str[0]-'0')*1+(str[2]-'0')*2+(str[3]-'0')*3+(str[4]-'0')*4+(str[6]-'0')*5+(str[7]-'0')*6+(str[8]-'0')*7+(str[9]-'0')*8+(str[10]-'0')*9;
		int result=sum%11;
		char c;
		if(result==10) c='X';
		else c=result+'0';
		if(str[12]==c) cout<<"Right"<<endl;
		else
		{
			cout<<str[0]<<str[1]<<str[2]<<str[3]<<str[4]<<str[5]<<str[6]<<str[7]<<str[8]<<str[9]<<str[10]<<str[11]<<c<<endl;
		}
	}
	return 0;
}
