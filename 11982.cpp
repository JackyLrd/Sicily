#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


bool Comp(const string &a,const string &b)
{
    string sub1,sub2;
    sub1=a+b;
    sub2=b+a;
    if(sub1.compare(sub2)==-1)
        return true;
    else
        return false;
}
int main()
{
//    ifstream cin("input.txt");
    string sub,result;
    vector<string> s;
    vector<string>::iterator it;
    int n,t;
    cin>>t;
    for(int j=0;j<t;++j)
    {
        cin>>n;
        result="";
        for(int i=0;i<n;++i)
        {
            cin>>sub;
            s.push_back(sub);
        }        
        sort(s.begin(),s.end(),Comp);
        for(it=s.begin();it!=s.end();++it)
        {
            result+=*it;
        }
        cout<<result<<endl;    
        s.clear();
    }

    return 0;
}
