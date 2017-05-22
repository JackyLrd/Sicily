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
				ans=i;
                break;
			}
			else;
		}
		printf("%d\n",ans);
	}
	return 0;
}
int check(int i)
{
	int n;
	n=0;
	while(i!=0)
	{
		n=n+i%10;
		i=i/10;
	}
	return n;
}
