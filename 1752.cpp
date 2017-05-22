#include <stdio.h>
#include <math.h>
int check(int x);
int main(void)
{
	int n,i,j,k,ans;
	for(i=2;i<=1000000;i++)
	{
		a[j]check(i);
	}
	while(scanf("%d",&n)&&n!=-1)
	{
		ans=check(n);
		printf("%d\n",ans);
	}
	return 0;
}
int check(int x)
{
	int i,j,jug,k=0;
	for(i=2;i<=sqrt(x);i++)
	{
		jug=0;
		if(i%j==0)
		{
			jug=1;
			break;
		}
		else;
		if(jug==0) k++; 
		else;
	}
	return k;
}
