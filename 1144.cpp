#include <stdio.h>
int main(void)
{
	int a[40],i,k,ans;
	scanf("%d%d%d%d%d%d%d%d%d%d",&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&a[10]);
	scanf("%d",&k);
	k=k+30;
	ans=0;
	for(i=1;i<=10;i++)
	{
		if(a[i]<=k) ans++;
		else ;
	}
	printf("%d",ans);
	return 0;
}
