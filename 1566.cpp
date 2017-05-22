#include <stdio.h>
int main(void)
{
	int a[501],b[501],c[501],d[501],a1,b1,c1,d1,n,i,j,k,m;
	m=1;
	scanf("%d%d%d%d",&a1,&b1,&c1,&d1);
	for(i=1;i<=a1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=b1;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=1;i<=c1;i++)
	{
		scanf("%d",&c[i]);
	}
	for(i=1;i<=d1;i++)
	{
		scanf("%d",&d[i]);
	}
	for(i=1;i<=a1;i++)
	{
		for(j=1;j<=b1;j++)
		{
			for(k=1;k<=c1;k++)
			{
				for(n=1;n<=d1;n++)
				{
					if(a[i]+b[j]+c[k]+d[n]==0)
					{
						m=0;
						printf("%d %d %d %d\n",a[i],b[j],c[k],d[n]);
						break;
					} 
					else;
				}
				if(m==0) break;
				else;
			}
			if(m==0) break;
			else;
		}
		if(m==0) break;
		else;
	}
	return 0;
}
