#include <stdio.h>
int main(void)
{
	int n,m,i,j,k,p,q,ans;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&m,&j);
		ans=m;
		for(k=1;k<=j;k++)
		{
			scanf("%d %d",&q,&p);
			ans=ans-(p*q);
		}
		if(ans>=0) printf("%d\n",ans);
		else printf("Not enough\n");
	}
	return 0;
}
