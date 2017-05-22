#include <stdio.h>
int main(void)
{
	int a[500],b[500],n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=n;i++)
		{
			if(a[i]>=b[j])
			{
				b[j]=a[i];
			}
			else;
		}
	}
}
