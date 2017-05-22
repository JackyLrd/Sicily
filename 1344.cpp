#include <stdio.h>
int main(void)
{
	int n,i,j,k,p,ans;
	while(scanf("%d %d",&k,&n)!=EOF)
	{
		ans=0;
		p=1;
        while(n)
        {
        	ans=ans+(n%2)*p;
        	p=p*k;
        	n=n/2;
		}
		printf("%d\n",ans);
	}
	return 0;
}
