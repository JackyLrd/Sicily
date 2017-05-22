#include <stdio.h>
int main(void)
{
	int dig[10],n,i,ans,j,k,p;
	while(scanf("%d",&n)&&n!=0)
	{
		k=0;
		ans=0;
		while(n!=0)
		{
			k++;
			dig[k]=n%10;
			if(dig[k]>4)
			{
				dig[k]--;
			}
			else;
			n/=10;
		}
		p=1;
		for(i=1;i<=k;i++)
		{
			ans+=dig[i]*p;
			p*=9;
		}
		printf("%d\n",ans);
	}
	return 0;
}
