#include <stdio.h>
int main(void)
{
	int m,n,i,j,k,p;
	double ans[500];
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		ans[i]=0;
		for(j=1;j<=m;j++)
		{
			scanf("%d",&k);
			ans[i]=ans[i]+k;
		}
		ans[i]=ans[i]/m;
		if(ans[i]<60) p++;
		else;
	}
	for(i=1;i<=n;i++)
	{
		printf("%.2f\n",ans[i]);
	}
	printf("%d\n",p);
	return 0;
}
