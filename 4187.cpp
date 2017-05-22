#include <stdio.h>
int main(void)
{
	int a[500],b[500],c[500],T,i;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
    scanf("%d%d%d",&a[i],&b[i],&c[i]);
    for(i=1;i<=T;i++)
    {
    	if(a[i]+b[i]<=c[i] || a[i]+c[i]<=b[i] || b[i]+c[i]<=a[i]) printf("NO\n");
    	else printf("YES\n");
	}
    return 0;
}
