#include <stdio.h>
int main(void)
{
	int min,max,ans,t,i,j,n,k;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		max=0;
		min=99;
		scanf("%d",&j);
		for(n=1;n<=j;n++)
		{
			scanf("%d",&k);
			if(k<=min) min=k;
			else min=min;
			if(k>=max) max=k;
			else max=max;
		}
		printf("%d",2*(max-min));
	}
	return 0;
}
