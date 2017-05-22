#include <iostream>  
#include <set>  
using namespace std;  
set<int>s;  
int arr[301],n,t;  
bool check(int x)  
{  
    for(int i=0;i<n;i++)  
    {  
        if(s.count(arr[i]%x)!=0)  
            return false;  
        else s.insert(arr[i]%x);  
    }  
    return true;  
}  
int main()  
{  
    cin>>t;  
    while(t--)  
    {  
        cin>>n;  
        for(int i=0;i<n;i++)  
            cin>>arr[i];  
        int result=n;  
        while(!check(result))  
        {  
            s.clear();  
            result++;  
        }  
        cout<<result<<endl;  
        s.clear();  
    }  
    return 0;  
}  
