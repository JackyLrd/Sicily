#include <stdio.h>
int main(void)
{
	double HFM[25000],p[25000],j,max;
	int n,i,ans1,ans2,ans3,tp;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf %lf",&j,&p[i]);
		HFM[i]=j/p[i];
	}
	max=0;
	for(i=1;i<=n;i++)
	{
		if(HFM[i]>max) max=HFM[i];
		else;
	}
	for(i=1;i<=n;i++)
	{
		if(HFM[i]==max)
		{
			ans1=i;
			tp=tp+p[i];
			HFM[i]=0;
			break;
		}
		else;
	}
	max=0;
		for(i=1;i<=n;i++)
	{
		if(HFM[i]>max) max=HFM[i];
		else;
	}
	for(i=1;i<=n;i++)
	{
		if(HFM[i]==max)
		{
			ans2=i;
			tp=tp+p[i];
			HFM[i]=0;
			break;
		}
		else;
	}
	max=0;
		for(i=1;i<=n;i++)
	{
		if(HFM[i]>max) max=HFM[i];
		else;
	}
	for(i=1;i<=n;i++)
	{
		if(HFM[i]==max)
		{
			ans3=i;
			tp=tp+p[i];
			HFM[i]=0;
			break;
		}
		else;
	}
	printf("%d\n",tp);
	printf("%d\n",ans1);
	printf("%d\n",ans2);
	printf("%d\n",ans3);
	return 0;
}
