#include <stdio.h>
const int p[10]={6,2,5,5,4,5,6,3,7,6};
int count(int x);
int main(void)
{
	int n,i,j,ans,dig[2001];
	for(i=0;i<=2000;i++)
	{
		dig[i]=count(i);
	}
	while(scanf("%d",&n)!=EOF)
	{
		ans=0;
		for(i=0;i<=1000;i++)
		{
			for(j=0;j<=1000;j++)
			{
				if(dig[i]+dig[j]+dig[i+j]==n-4) ans++;
			}
		}
		printf("%d\n",ans);
	}
}
int count(int x)
{
	int ans=0;
	if(x==0) ans=6;
	else
	{
		while(x!=0)
		{
			ans+=p[x%10];
			x/=10;
		}
	}
	return ans;
}
