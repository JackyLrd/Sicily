#include <stdio.h>
int main(void)
{
	int a[40],b,x,i,n,ans;
    n=1;
    ans=0;
    b=1;
    scanf("%d",&x);
    while(x!=0)
    {
	   a[n]=x%10;
	   x=x/10;
	   n++;
	}
	n=n-1;
	for(i=1;i<=n;i++)
	{
		ans=ans+a[i]*b;
		b=b*2;
    }
    printf("%d",ans);
	return 0;     
}


