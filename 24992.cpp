#include <stdio.h>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;

int hash[60005];

int main()
{
    int t,n,i,j,flag;
    memset(hash,0,sizeof(hash));
    for(i = 1; i*i<=60000; i++)
        hash[i*i] = 1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        flag = 0;
        if(hash[n])
        {
            printf("1\n");
            continue;
        }
        for(i = 1; i*i<=n; i++)
        {
            if(hash[n-i*i])
            {
                printf("2\n");
                flag = 1;
                break;
            }
        }
        if(flag)
            continue;
        flag = 0;
        for(i = 1; i*i<=n; i++)
        {
            for(j = 1; j*j+i*i<=n; j++)
            {
                if(hash[n-i*i-j*j])
                {
                    printf("3\n");
                    flag = 1;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            continue;
        printf("4\n");
    }

    return 0;
}

