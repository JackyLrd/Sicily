#include <stdio.h>
#include <memory.h>
int main(void)
{
	int i,j,k,n,p,temp,a[50000],b[50000];
	while(scanf("%d",&n)!=EOF)
	{
		p=1;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&k);
			temp=0;
			if(i==1)
			{
				a[1]=k;
				b[1]=1;
			}
			else
			{
				for(j=1;j<=p;j++)
				{
					if(k==a[j])
					{
						temp++;
						b[j]++;
					}
					else;
				}
				if(temp==0)
				{
					p++;
					a[p]=k;
					b[j]++;
				} 
			}
		}
		for(j=1;j<=p;j++)
		{
			if(b[j]%2==1) printf("%d\n",a[j]);
			else;	
		}
		memset(a,0,50000);
		memset(b,0,50000);
	}
	return 0;
}
