#include <stdio.h>
int sub(int n,int m,int x);
int main(void)
{
	int T,n,m,i,j,k,ans;
	scanf("%d",&T);
	while(T--)
	{
		ans=0;
		scanf("%d %d",&n,&m);
		ans=sub(n,m,1);
		printf("%d\n",ans);		
	}
	return 0;
}
int sub(int n,int m,int x)
{
	int ans=0;
	if(m>1)
	{
		x+=2;
		while(x<=n-2*(m-1))
		{	
			ans+=sub(n,m-1,x);
			x++;
			//printf("%d %d\n",m,ans);
		}
	}
	else
	{
		x+=2;
		while(x<=n-2*(m-1))
		{	
			ans++;
			x++;
			//printf("%d %d\n",m,ans);
		}
	}
	return ans;
}
