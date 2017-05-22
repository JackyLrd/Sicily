#include <stdio.h>
int main(void)
{
	int a[1001][1001],T,x,n,i,j,check;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		x=a[1][1];
		check=1;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i==j)
				{
					if(a[i][j]==x);
					else
	                {
	                	check=0;
	                	break;
					}
				}
				else
				{
					if(a[i][j]!=0)
					{
						check=0;
						break;
					}
					else;
				}
			}
			if(check==0) break;
		}
		if(check==1) printf("YES\n");
		else printf("NO\n");	   
	}
	return 0;
}
