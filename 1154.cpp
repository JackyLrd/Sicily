#include <stdio.h>
int main(void)
{
	int n,t,i,j,k,a[500],b[500];
	scanf("%d",&n);
	t=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	j=n;
	for(i=1;i<=n;i++)
	{
		if(a[i]>=t)
		{
			t=a[i];
		}
		else;
	}
	printf("%d\n",t);
	while(j>=1)
	{
		for(i=1;i<=n;i++)
		{
			if(a[i]>=t)
			{
				b[j]=a[i];
				j--;
			}
			else;
		}
		t=t-1;
	}
	for(j=1;j<=n;j++)
	{
		printf("%d\n",b[j]);
	}
	return 0;
}
