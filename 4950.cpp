#include <stdio.h>
int main(void)
{
	int a[500],b[500],c[500],i;
	for(i=1;i<=3;i++)
	{
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
	}
	for(i=1;i<=3;i++)
	{
		printf("%d\n",a[i]*b[i]*c[i]);
	}
	return 0;
}
