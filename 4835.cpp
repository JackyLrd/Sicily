#include <stdio.h>
#include <string.h>
int main(void)
{
	int n,i,j,k,p,q;
	char a[500];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",&a);
		k=strlen(a);
		p=k-1;
		q=0;
		for(j=0;j<k;j++)
		{
			if(a[j]==a[p]);
			else q++;
			p--;
		}
		if(q==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
