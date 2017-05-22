#include <stdio.h>
int main(void)
{
	int a[50000],b[50000],c[50000],n,i,j,k;
	while(scanf("%d",&n)&&n!=0)
	{
		for(i=1;i<=n*n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n*n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=1;i<=n*n;i++)
	{
		c[i]=a[i]+b[i];
	}
	k=1;
	j=n;
	while(j!=0)
	{
		for(i=k;i<k+n;i++)
		{
			if(i==k+n-1) printf("%d",c[i]);
            else printf("%d ",c[i]);
		}
		k=k+n;
		j--;
		printf("\n");
	}
	}
	return 0;
}
