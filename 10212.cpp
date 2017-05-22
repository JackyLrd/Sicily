#include <stdio.h>
int que[200002],a[100002],b[100002];
int main(void)
{
	int n,i,j,k,jug,max,min,q;
	while(scanf("%d",&n)&&n!=0)
	{
		jug=n;
		for(i=1;i<=n;i++)
		{
			que[2*i]=1;
			que[2*i-1]=1;
			scanf("%d %d",&a[i],&b[i]);
			if(a[i]-1==b[i]||a[i]+1==b[i])
			{
				que[a[i]]=0;
				que[b[i]]=0;
				jug--;
			}
			else;
		}
		k=jug;
		for(i=1;i<=k;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(que[a[j]]==0&&que[b[j]]==0)
				{
					continue;
				}
				else
				{
					if(a[j]>b[j])
					{
						max=a[j];
						min=b[j];
					}
					else
					{
						max=b[j];
						min=a[j];
					}
					for(q=min+1;q<=max-1;q++)
					{
						if(que[q]==0);
						else break;
					}
					if(q==max)
					{
						jug--;
						a[j]=0;
						b[j]=0;
						break;
					}
					else
					{
						for(q=min-1;q>=1;q--)
                    	{
                    		if(que[q]==0);
                    		else break;
						}
						if(q==0)
						{
							for(q=max+1;q<=2*n;q++)
							{
								if(que[q]==0);
								else break;
							}
							if(q==2*n+1)
							{
								jug--;
								a[j]=0;
								b[j]=0;
								break;
							}
							else;
						}
						else;
					}
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
