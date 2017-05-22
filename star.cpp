#include <stdio.h>
long long in[100001]={0};
long long sum=0,sum1=0,p;
int n,m,i,j,x,o,l,r,one=1,jug1=1;
int main(void)
{
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&p);
		in[i]=in[i-1]+p;
	}
	for(i=1;i<=m;i++)
	{
		scanf("%d",&o);
		if(o==1)
		{
			one*=-1;
			jug1*=-1;
		}
		else if(o==2)
		{
			scanf("%d",&x);
			sum1=sum1*jug1+x;
			jug1=1;
		}
		else
		{
			scanf("%d %d",&l,&r);
			sum=in[r]-in[l-1];
			sum=sum*one+sum1*jug1*(r-l+1);
			printf("%lld\n",sum);
			sum=0;
		}
	}
	return 0;
}
