#include <stdio.h>
#include <math.h>
int pali(int);
int prime(int);
int main(void)
{
	int a,ans,b,n,i,j,k;
	while(scanf("%d%d",&a,&b)&&(a!=0||b!=0))
	{
		for(n=a;n<=b;n++)
		{
			ans=prime(n);
            if(ans==0);
            else
            {
            	ans=pali(ans);
			}
			if(ans==0);
			else printf("%d\n",ans);
		}
	}
	return 0;
}

int pali(int x)
{
	int a[50000],i,j,k,q,p,m;
	m=x;
	i=0;
	p=0;
	while(x!=0)
	{
		i++;
		a[i]=x%10;
		x=x/10;
	}
	k=i;
	for(j=1;j<=(i+1)/2;j++)
	{
		if(a[j]==a[k]) p++;
		else break;
		k--;
	}
	if(p==(i+1)/2) x=m;
	else x=0;
	return x;
}
int prime(int x)
{
	int i,j,m;
	m=0;
	i=sqrt(x);
	for(j=1;j<=i;j++)
	{
		if(x%j==0) m++;
		else;
	}
	if(m==1) x=x;
	else x=0;
	return x;
}
