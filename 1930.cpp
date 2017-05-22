#include <stdio.h>
int main(void)
{
	int T,n,i,j,k,x,in[500],ans,temp;
	scanf("%d",&T);
	while(T--)
	{
		ans=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&in[i]);
		}
		for(k=1;k<=n;k++)
		{
			x=k;
			for(j=x;j<=n;j++)
			{
				if(in[j]<in[x])
				{
					if(j!=k)
					{
						x=j;
						ans++;
					}
					else;
				}
				else;
			}
			if(j!=k)
			{
				temp=in[x];
				in[x]=in[k];
				in[k]=temp;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
