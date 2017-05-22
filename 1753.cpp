#include <iostream>
#include <cstring>
using namespace std;

int main()
{ 
    string s;
    while(cin>>s && s!="XXX")
    {
        int count = 0;
        char pre;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                count = count*10 + s[i] - '0';
            }   
            else
            {
                if(count > 0)
                {
                    for(int i=0; i<count-1; i++)
                        cout<<pre;
                    count = 0;
                }
                pre = s[i];
                cout<<s[i];
            }
        }
        if(count > 0)
        {
            for(int i=0; i<count-1; i++)
                cout<<pre;
        }
        cout<<endl;     
    }
    //system("pause");
    return 0;   
}                                 
