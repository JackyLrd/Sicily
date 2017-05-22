#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,i,j,k;
	scanf("%d",&n);
	while(n!=(-1))
	{
		if(n==0||n==1) printf("No\n");
		else
		{
				j=0;
		k=sqrt(n);
		for(i=1;i<=k;i++)
		{
			if(n%i==0) j++;
			else;
		}
		if(j>1) printf("No\n");
		else printf("Yes\n");
		}
		scanf("%d",&n);
	}
	return 0;
}
