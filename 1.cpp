#include <stdio.h>
int main(void)
{
	int n,i,a[5000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
