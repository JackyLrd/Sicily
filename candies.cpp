#include <stdio.h>
int main(void)
{
	int swt[100],val[100],n,i,sum,T,jug;
	scanf("%d",&T);
	while(T--)
	{
		sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			swt[i]=1;
			scanf("%d",&val[i]);
		}
		jug=0;
		while(1)
		{
			for(i=0;i<n-1;i++)
			{
				if(val[i]>val[i+1]&&swt[i]<=swt[i+1])
				{
//					printf("%d %d %d\n",i,swt[i],swt[i]+1);
					swt[i]++;
					jug=1;
				}
			}
			if(val[i]>val[0]&&swt[i]<=swt[0])
			{
//				printf("%d %d %d\n",i,swt[i],swt[i]+1);
				swt[i]++;
				jug=1;
			}
			for(i=n-1;i>=1;i--)
			{
				if(val[i]>val[i-1]&&swt[i]<=swt[i-1])
				{
//					printf("%d %d %d\n",i,swt[i],swt[i]+1);
					swt[i]++;
					jug=1;
				}
			}
			if(val[i]>val[n-1]&&swt[i]<=swt[n-1])
			{
//				printf("%d %d %d\n",i,swt[i],swt[i]+1);
				swt[i]++;
				jug=1;
			}
			if(jug==0) break;
			else;
			jug=0;
		}
		for(i=0;i<n;i++)
		{
			sum+=swt[i];
		}
		printf("%d\n",sum);
	}
	return 0;
}
