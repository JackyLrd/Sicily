// Problem#: 4923
// Submission#: 1435620
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <stdio.h>
#include <algorithm> //这个包含一个sort()的快排函数
using namespace std;
int main()
{
    int n=0,m=0;
    scanf("%d%d",&n,&m);
    while(n)
    {
        int *a,i=0;
        a=new int[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        printf("%d",a[0]);
        for(i=m;i<n;i=i+m)
        {
            printf(" %d",a[i]);
        }
        printf("\n");
        scanf("%d%d",&n,&m);
    }
    return 0;
}
