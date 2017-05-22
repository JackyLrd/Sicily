#include <stdio.h>
#include <memory.h>
int main(void)
{
	int a[20][20],b[20][20],out[20][20],n,i,j,k,q,p;
	while(scanf("%d",&n)!=EOF)
	{
		memset(out,0,sizeof(out));
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		q=1;
		p=1;
	    while(q<=n)
	    {
	    	for(p=1;p<=n;p++)
	        {
	        	for(i=1;i<=n;i++)
	    	    {
	    		    out[p][q]=out[p][q]+a[p][i]*b[i][q];
			    }
			}
			q++;
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(j==n) printf("%d\n",out[i][j]);
				else printf("%d ",out[i][j]);
			}
		}
	}
	return 0;
}
