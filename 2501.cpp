#include <stdio.h>
int main(void)
{
	int ans,n,i,k,j,m;
	ans=0;
	scanf("%d%d",&n,&k);
	i=n;
	for(j=1;j<=9901;j++)
	{
		ans=ans%9901+n%9901;
		n=n*i;
    }
    n=i;
    ans=(k/9900)*ans;
    m=k%9900;
    for(j=1;j<=m;j++)
    {
    	ans=ans%9901+n%9901;
    	n=n*i;
	}
    printf("%d\n",ans%9901);	
	return 0;
}
