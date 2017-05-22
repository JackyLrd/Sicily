#include <stdio.h>
int main(void)
{
	int ans,a,b,k,m,n,i,x,y,p;
	scanf("%d %d %d %d %d",&a,&b,&k,&n,&m);
	p=a;
    for(i=1;i<n;i++)
    {
    	a=((a%10007)*p)%10007;
	}
	p=b;
	for(i=1;i<m;i++)
	{
		b=((b%10007)*p)%10007;
	}
	x=1;
	p=k;
	for(i=n;i>=1;i--)
	{
		x=(x%10007)*p;
		p=p-1;
	}
	y=1;
	for(i=n;i>=1;i--)
	{
		y=(y%10007)*i;
	}
	printf("%d %d %d %d\n",a,b,x,y);
	ans=((a*b)%10007*(x/y))%10007;
	printf("%d\n",ans);
	return 0;
}
