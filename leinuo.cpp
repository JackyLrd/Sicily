#include <stdio.h>
int time;
int ary[11];
int main(void)
{
    
}
void f(int x,int n)
{
    if(x==n) count++;
    else
    {
        for(i=x+1;i<=n;i++)
        {
            if(time-t[ary[i]]-a[ary[x]][ary[i]]>0)
            {
                temp=ary[x];
                ary[x]=ary[i];
                ary[i]=temp;
                qsort(x+1,n);
                f(x+1,n);
            }
            else;
        }
    }
    int temp;

}

