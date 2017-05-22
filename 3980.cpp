#include <stdio.h>
#include <string.h>
int main(void)
{
	int T,ans,i,b[500],k,p,n;
	char a[32];	
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		ans=0;
		p=1;
		scanf("%s",&a);
		k=strlen(a);
		for(n=k-1;n>=0;n--)
		{
			if(a[n]==48)
			{
				ans=ans+0*p;
			}
			else
			{
				ans=ans+1*p;
			}
			p=p*2;
		}
		b[i]=ans;
	}
	for(i=1;i<=T;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}
