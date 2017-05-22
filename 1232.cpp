#include <stdio.h>
int main(void)
{
	int n,i,j,k,ans;
	scanf("%d",&n);
	while(n--)
	{
		ans=0;
		scanf("%d",&i);
		ans=ans-(i-1);
		while(i--)
		{
			scanf("%d",&j);
			ans=ans+j;
		}
		printf("%d\n",ans);
	}
	return 0;
}
