#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[100];
	int n,i,j,k,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %s",&j,&a);
		k=strlen(a);
		for(m=j-1;m<k;m++)
		{
			a[m]=a[m+1];
		}
		printf("%d %s\n",i,a);
	}
	return 0;
}
