#include <stdio.h>
int main(void)
{
	int a,b,l,h,n,i,j,ans;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ans=0;
		scanf("%d%d%d%d",&a,&b,&l,&h);
		for(j=h;j>=l;j--)
		{
			if(a%j==0&&b%j==0)
			{
				ans=j;
				break;
			}
			else;
		}
		if(ans==0) printf("No answer\n");
		else printf("%d\n",ans);
	}
	return 0;
}
