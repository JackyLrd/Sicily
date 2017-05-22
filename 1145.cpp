#include <stdio.h>
int main(void)
{
	int a[100000],i,j,k,m,n,ans;
	ans=0;
	scanf("%d%d",&j,&k);
	for(m=0;m<=j;m++)
	{
		a[m]=0;
	}
	for(i=1;i<=k;i++)
	{
		scanf("%d%d",&m,&n);
		for(m=m;m<=n;m++)
		{
			a[m]=1;
		}
	}
	for(m=0;m<=j;m++)
		{
			ans=ans+a[m];
		}	
	printf("%d\n",j+1-ans);
	return 0;
}
