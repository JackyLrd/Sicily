#include <stdio.h>
int ary[33000]={0};
int main(void)
{
    int in,min,n,i,j,l,r,minsum,cursum;
    while(scanf("%d",&n)&&n!=0)
    {
        scanf("%d %d",&l,&r);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ary[i]);
        }
        cursum=0;
        minsum=0;
        for(i=l;i<=r;i++)
        {
			cursum+=ary[i];
			if(cursum<minsum) minsum=cursum;
			if(cursum>0) cursum=0;
        }
        printf("%d\n",minsum);
    }
    return 0;
}                                 
