#include <stdio.h>
int main(void)
{
    char str[100][20],jug1,jug2;
    int n,i,k,a,b,c,ans[100],output,max;
    max=0;
    output=0;
    a=0;
    b=0;
    c=0;
    scanf("%d",&n);
        for(i=0;i<n;i++)
    {
        scanf("%s %d %d %c %c %d",&str[i],&a,&b,&jug1,&jug2,&c);
        ans[i]=0;
        if(a>80&&c>=1) ans[i]=ans[i]+8000;
        else;
        if(a>85&&b>80) ans[i]=ans[i]+4000;
        else;
        if(a>90) ans[i]=ans[i]+2000;
        else;
        if(a>85&&jug2=='Y') ans[i]=ans[i]+1000;
        else;
        if(b>80&&jug1=='Y') ans[i]=ans[i]+850;
        else;
        output=output+ans[i];
    }
    for(i=0;i<n;i++)
    {
        if(ans[i]>max)
        {
            max=ans[i];
            k=i;
        }
        else;
    }
    printf("%s\n",str[k]);
    printf("%d\n",max);
    printf("%d\n",output);
    return 0;
}                                 
