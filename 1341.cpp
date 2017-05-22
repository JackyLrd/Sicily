#include <stdio.h>
int main(void)
{
	int a[5000],ans[5000],n,i,j,k,temp;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<n;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
				else;
			}
		}
		j=1;
		ans[1]=a[1];
        for(i=2;i<=n;i++)
        {
        	if(a[i]==a[i-1]);
        	else
        	{
        		j++;
        		ans[j]=a[i];
			}
		}
		printf("%d\n",j);
		for(i=1;i<=j;i++)
		{
			if(i!=j) printf("%d ",ans[i]);
			else printf("%d\n",ans[i]);
		}
	}
	return 0;
}
