#include <stdio.h>
int main(void)
{
	int out[5000],str[5000],T,n,i,j,k;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			str[i]=i;
		}
		i=1;
		k=0;
		while(i<=n-1)
		{
			k++;
			out[k]=str[i];
			i++;
			n++;
			str[n]=str[i];
			i++;
		}
		for(i=1;i<=k;i++)
		{
			printf("%d ",out[i]);
		}
		printf("%d \n",str[n]);
	}
	return 0;
}
