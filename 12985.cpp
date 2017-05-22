#include <stdio.h>
int main(void)
{
	int T,a[500],b[500],c[500],i;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	}
	for(i=1;i<=T;i++)
	{
		if(a[i]==b[i]+c[i]) printf("%d + %d = %d\n",b[i],c[i],a[i]);
		else if(b[i]==a[i]+c[i]) printf("%d + %d = %d\n",a[i],c[i],b[i]);
		else if(c[i]==a[i]+b[i]) printf("%d + %d = %d\n",a[i],b[i],c[i]);
		else printf("%d %d %d NO SUM\n",a[i],b[i],c[i]);
	}
	return 0;
}
