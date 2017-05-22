#include <stdio.h>
int main(void)
{
	int T,n,m,i,j,k,q,p,l,r,dis,ans;
	scanf("%d",&T);
	while(T--)
	{
		ans=0;
		dis=0;
		scanf("%d %d",&n,&m);
		scanf("%d",&q);
		l=1;
		r=1+m-1;
		for(i=1;i<=q;i++)
		{
			scanf("%d",&p);
			if(p>r)
			{
				ans=ans+p-r;
				dis=p-r;
				l=l+dis;
				r=r+dis;
			}
			else if(l>p)
			{
				ans=ans+l-p;
				dis=l-p;
				l=l-dis;
				r=r-dis;
			}
			else;
		}
		printf("%d\n",ans);
	}
	return 0;
}
