#include <stdio.h>
int main(void)
{
	int a[50000],b[50000],i,j,k,m,n,p,q,ans,x,y;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[j]);
		}
		k=1;
		ans=0;
		y=m*(m-1);
        while(ans==0)
        {
        	x=0;
        	q=0;
        	for(j=1;j<=m;j++)
        	{
        		b[j]=a[j]%k;
			}
			for(j=1;j<=m;j++)
			{
				for(p=1;p<=m;p++)
				{
					if(b[j]==b[p]&&j!=p)
					{
						q++;
						break;
					}
					else if(b[j]==b[p]&&j==p);
					else x++;
				}
				if(q!=0) break;
				else;
			}
            if(x==y) ans=k;
			else ans=0; 
			k++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
