#include <stdio.h>
#include <memory.h>
int main(void)
{
	int T,n,i,j,k,q,p,a[50000];
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		k=0;
		q=0;
		p=0;
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			scanf("%d %d",&k,&p);
			if(a[k]<=p) a[k]=p;
			else;
			if(q<=k) q=k;
			else;
		}
		for(j=1;j<=q;j++)
		{
			if(a[j]==0);
			else
			{
				printf("%d %d\n",j,a[j]);
			}
		}
		memset(a,0,50000);
	}
	return 0;
}
