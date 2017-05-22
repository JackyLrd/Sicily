#include <stdio.h>
void fun(int four,int sev,int len,int x);
int c(int q,int y);
int p[400][20];
int k=0;
int main(void)
{
	int T,n,i,j;
	long long check[400]={0},q;
	for(i=2;i<=8;i+=2)
	{
		fun(i/2,i/2,i,1);
	}
	for(i=0;i<k;i++)
	{
		q=1;
		for(j=8;j>=1;j--)
		{
			if(p[i][j]!=0)
			{
				check[i]+=q*p[i][j];
				q*=10;
			}
			else;
		}
	}
	check[98]=4444477777;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(i=0;i<=k;i++)
		{
			if(n>check[i]&&n<check[i+1])
			{
				printf("%lld\n",check[i+1]);
				break;
			}
			if(n==check[i])
			{
				printf("%lld\n",check[i]);
				break;
			}
		}
	}
	return 0;
}
void fun(int four,int sev,int len,int x)
{
	int i;
	if(x==len)
	{
		if(four>0) p[k][x]=4;
		else p[k][x]=7;
		k++;
	}
	else
	{
		if(four>0)
		{
			
			for(i=k;i<k+c(sev,four+sev-1);i++)
			{
				p[i][x]=4;
			}
			fun(four-1,sev,len,x+1);
		}
		else;
		if(sev>0)
		{
			
			for(i=k;i<k+c(four,four+sev-1);i++)
			{
				p[i][x]=7;
			}
			fun(four,sev-1,len,x+1);
		}
		else;
	}
}
int c(int q,int y)
{
	int ans;
	int i,n=1,m=1;
	for(i=2;i<=q;i++)
	{
		n*=i;
	}
	for(i=2;i<=y;i++)
	{
		m*=i;
	}
	ans=m/n;
	if(ans==0) ans=1;
	return ans;
}
