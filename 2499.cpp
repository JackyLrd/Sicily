#include <stdio.h>
int main(void)
{
	int n,i,j,m,x,T,ans[60001]={0};
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%d",&x);
		for(j=1;j*j<=60000;j++)
		{
			ans[j*j]=1;
		}
		for(j=1;j<=60000;j++)
		{
			if(ans[j]==0)
			{
				for(m=1;m*m<=j;m++)
			    {
				    if(ans[j-m*m]==1)
				    {
					    ans[j]=2;
					    break;
				    }
				    if(ans[j-m*m]==2)
				    {
					    ans[j]=3;
				    }
                }
			}
		}
		if(ans[x]==0) printf("4\n");
		else printf("%d\n",ans[x]);	
	}
	return 0;
}
