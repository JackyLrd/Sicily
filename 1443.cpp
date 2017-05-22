// Problem#: 1443
// Submission#: 4126522
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <stdio.h>
int main(void)
{
    int T,n,i,j,p,x,temp,ans,k,jug,jug2,a[10000];
    scanf("%d",&T);
    while(T--)
    {
        jug=1;
        jug2=1;
        ans=0;
        scanf("%d %d",&n,&p);
        p++;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        k=1;
        while(jug==1)
        {
            jug2=1;
            for(i=k+1;i<=n;i++)
            {
                if(a[k]<a[i])
                {
                    jug2=0;
                    n++;
                    a[n]=a[k];
                    break;
                }
                else;
            }
            if(jug2==1)
            {
                ans++;
                if(p==k)
                {
                    jug=0;
                    printf("%d\n",ans);
                }
                else;
            }
            else
            {
                if(p==k)
                {
                    p=n;
                }
                else;
            }
            k++;
        }
    }
    return 0;
}                                 
