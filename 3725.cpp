#include <stdio.h>
int main(void)
{
	int n,ans,i,a[500];
	scanf("%d",&n);
	while(n!=0)
	{
	ans=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=1;i<=n;i++)
		{
			if(a[i]>=ans) ans=a[i];
			
		}
			printf("%d\n",ans);
			scanf("%d",&n);
	}
    return 0;
}
