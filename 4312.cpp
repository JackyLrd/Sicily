#include <stdio.h>
int main(void)
{
	int a[500],b[500],T,i,ans,p;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
	    scanf("%d%d",&a[i],&b[i]);
	}
	for(i=1;i<=T;i++)
	{
		ans=0;
		p=1;
		while(a[i]!=0)
		{
			if(a[i]%10==0)
			{
			ans=ans;
			}
			else 
			{
				ans=ans+(a[i]%10)*p;
				p=p*10;
			}
			a[i]=a[i]/10;
		}
		p=1;
		while(b[i]!=0)
		{
			if(b[i]%10==0)
			{
			ans=ans;
			}
			else 
			{
				ans=ans+(b[i]%10)*p;
				p=p*10;
			}
			b[i]=b[i]/10;
		}
		printf("%d",ans);
	}
	return 0;	
}
