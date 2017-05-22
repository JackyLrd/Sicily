#include <stdio.h>
int main(void)
{
	int a[500],b[500],T,i,j,k;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=1;i<=T;i++)
	{
		if(a[i]%b[i]==0 || b[i]%a[i]==0) printf("No\n");
		else printf("Yes\n");
	}
	return 0;
}
