#include <stdio.h>
int a[100001],b[100001];
int main(void)
{
	int n,i,j,k,jug,max;
	while(scanf("%d",&n)&&n!=0)
	{
		jug=2*n;
		for(i=1;i<=n;i++)
		{
			scanf("%d %d",&a[i],&b[i]);
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(a[j]==0&&b[j]==0) continue;
				else
				{
					if(a[j]-1==b[j]||a[j]+1==b[j])
					{
						jug-=2;
						if(jug==0)
						{
							break;
						}
						else;
						max=a[j]>b[j]?a[j]:b[j];
						for(k=1;k<=n;k++)
						{
							if(a[k]>max) a[k]-=2;
							else;
							if(b[k]>max) b[k]-=2;
							else;
						}
						a[j]=0;
						b[j]=0;
					}
					else if((a[j]==jug&&b[j]==1)||(a[j]==1&&b[j]==jug))
					{
						jug-=2;
						if(jug==0)
						{
							break;
						}
						else;
						for(k=1;k<=n;k++)
						{
							if(a[k]>1) a[k]--;
							else;
							if(b[k]>1) b[k]--;
							else;
						}
						a[j]=0;
						b[j]=0;
					}
					else;
				}
			}
			if(jug==0)
			{
				printf("Yes\n");
				break;
			}
			else;
		}
		if(jug>0) printf("No\n");
		else;
	}
	return 0;
}
