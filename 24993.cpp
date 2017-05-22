#include <iostream>
using namespace std;

int main()
{
    int arr[60007]={0},t,n;
    for(int i=1;i*i<=60000;i++)
        arr[i*i]=1;
    for(int i=1;i<=60000;i++)
    {
        if(arr[i]==0)
        {
            for(int j=1;j*j<=i;j++)
            {
                if(arr[i-j*j]==1)
                {
                    arr[i]=2;
                    break;
                    }
                if(arr[i-j*j]==2)
                    arr[i]=3;
            }
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<(arr[n]?arr[n]:4)<<endl;
    }
}
