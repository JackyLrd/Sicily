#include <stdio.h>
int check(int);
int main(void)
{
	int n,i,j,k,x,p,ans;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		p=0;
		ans=0;
		k=x;
		while(k!=0)
		{
			k=k/10;
			p++;
		}
		for(i=x-9*p;i<=x;i++)
		{
			if(i+check(i)==x)
			{
                break;
			}
			else;
		}
		printf("%d %d\n",ans,i);
	}
	return 0;
}
int check(int i)
{
	int n;
	while(i!=0)
	{
		n=n+i%10;
		i=i/10;
	}
	return n;
}
