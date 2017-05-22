#include <stdio.h>
#include <math.h>
int main(void)
{
	int T,dig[20],n,temp,i,j,k,p,ans;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		if(n<=10) printf("%d\n",n);
		else
		{
			ans=0;
			k=0;
			temp=n;
			while(temp!=0)
			{
				k++;
				dig[k]=temp%10;
				temp=temp/10;
			}
			dig[k+1]=0;
			for(i=1;i<=k-1;i++)
			{
				if(dig[i]<=4)
				{
					dig[i]=0;
				}
				else
				{
					dig[i]=0;
					dig[i+1]++;
				}
			}
			if(dig[k]<9);
			else 
			{
				dig[k]=0;
				dig[k+1]++;
			}
			p=1;
			for(i=1;i<=k+1;i++)
			{
				ans=ans+dig[i]*p;
				p=p*10;
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}
