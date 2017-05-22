#include <stdio.h>
int main(void)
{
	int a[50000],b[50000],i,j,k,m,n,s,temp;
	while(scanf("%d%d",&n,&s)&&(n!=0||s!=0))
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d %d",&a[i],&b[i]);
		}
		temp=0;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<n;j++)
			{
				if(b[j]>b[j+1])
				{
					temp=b[j];
					b[j]=b[j+1];
					b[j+1]=temp;
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
				else;
			}
		}
		j=1;
		for(i=1;i<=n;i++)
		{
			if(s>=b[i])
			{
				s=s+a[i];
				j++;
			}
			else;
		}
		if(j==n+1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
