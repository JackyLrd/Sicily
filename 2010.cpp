#include <stdio.h>
int main(void)
{
	int ans,a[50000],i,j,k,p,q,n;
	scanf("%d",&n);
	if(n<100) ans=n;
	else
	{
		ans=99;
		for(i=100;i<=n;i++)
	{
		p=0;
		k=i;
		j=0;
		while(k!=0)
		{
			j++;
			a[j]=k%10;
			k=k/10;
		}
		for(q=2;q<=j-1;q++)
		{
			if(a[q]==a[q-1]-a[q+1]||a[q]==a[q-1]+a[q+1]||a[q]==a[q+1]-a[q-1]) p++;
			else break;
		}
		if(p==j-2) ans++;
		else;
	}
	}
	printf("%d\n",ans);
	return 0;
}
