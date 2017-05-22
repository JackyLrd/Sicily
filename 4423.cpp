#include <stdio.h>
#include <math.h>
int main(void)
{
	long long n,i,j,k,T,max,x,dig1[20]={0};
	long long ans;
	scanf("%lld",&T);
	while(T--)
	{
		max=0;
		scanf("%lld",&n);
		for(j=1;j<=n;j++)
		{
			scanf("%lld",&i);
			k=0;
			while(i!=0)
			{
				k++;
				if(i%2==1) dig1[k]++;
				else;
				i=i/2;
			}
			if(max<=k) max=k;
			else;
		}
		ans=0;
		x=1;
        for(j=1;j<=max;j++)
        {
        	if(dig1[j]*(n-dig1[j])==0);
        	else ans=ans+dig1[j]*(n-dig1[j])*pow(2,j-1); 	
		}
		printf("%lld\n",ans);
	}
	return 0;
}


