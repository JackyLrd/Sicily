#include <stdio.h>
int main(void)
{
	int a[500000],n,i,j,k,p,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=0;
		scanf("%d",&m);
		while(m>1)
		{
			j=2;
			while(m%j!=0)
			{
				j++;
			}
		    m=m/j;
		    a[p]=j;
		    p++;
	    }
		for(j=0;j<p;j++)
		{
			printf("%d ",a[j]);
		}
		printf("\n"); 
	}
	return 0;
}
