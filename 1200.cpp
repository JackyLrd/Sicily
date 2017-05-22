#include <stdio.h>
int main(void)
{
	int n,i,j,len[500];
	while(scanf("%d",&n)&&n!=0)
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d",&len[i]);
		}
		for(i=1;i<=n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				if(len[i]==len[j]&&(len[i]!=0&&len[j]!=0))
				{
					len[i]=0;
					len[j]=0;
					break;
				}
				else;
			}
		}
	    for(i=1;i<=n;i++)
	    {
	    	if(len[i]!=0) printf("%d\n",len[i]);
	    	else;
		}
	}
	return 0;
}
