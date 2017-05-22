#include <stdio.h>
int ball[500001];
int main(void)
{
	int T,n,m,i,j,x,y,ins;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&n,&m);
		for(i=1;i<=n;i++)
		{
			ball[i]=i;
		}
		for(i=1;i<=m;i++)
		{
			scanf("%d %d %d",&ins,&x,&y);
			if(ins==1)
			{
				if(x<y)
				{
					for(j=1;j<=n;j++)
					{
						if(ball[j]>ball[x]&&ball[j]<ball[y])
						{
							ball[j]--;
						}
					}
					ball[x]=ball[y]-1;
				}
				else
				{
					for(j=1;j<=n;j++)
					{
						if(ball[j]<x&&ball[j]>ball[y])
						{
							ball[j]++;
						}
					}
					ball[x]=ball[y];
					ball[y]++;
				}
			}
			else
			{
				if(x<y)
				{
					for(j=1;j<=n;j++)
					{
						if(ball[j]>ball[x]&&ball[j]<ball[y])
						{
							ball[j]--;
						}
					}
					ball[x]=ball[y];
					ball[y]--;
				}
				else
				{
					for(j=1;j<=n;j++)
					{
						if(ball[j]<x&&ball[j]>ball[y])
						{
							ball[j]++;
						}
					}
					ball[x]=ball[y]+1;
				}
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(ball[j]==i) 
				{
					printf("%d ",j);
					break;
				}
			}
		}
		printf("\n");
	}
	return 0; 
}
