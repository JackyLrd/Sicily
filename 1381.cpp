#include <stdio.h>
int main(void)
{
	int a[40][2],T,i;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%d %d",&a[i][1],&a[i][2]);
	}
	for(i=1;i<=T;i++)
	{
		printf("%d\n",a[i][1]*a[i][2]);
	}
	return 0;
}
