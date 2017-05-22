#include <stdio.h>
#include <math.h>
int check(int x);
int main(void)
{
	int n,i,j,k,ans;
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
	for(i=2;i<=x;i++)
	{
		jug=0;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				jug=1;
				break;
			}
			else;
		}
		if(jug==0) k++; 
		else;
	}
	return k;
}
