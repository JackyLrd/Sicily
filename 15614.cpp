#include <stdio.h>
#include <math.h>
int main(void)
{
	int m,n,i,j,k,p,a[50000];
	scanf("%d",&n);
	i=2;
	j=3;
	a[1]=2;
	while(i<=n)
	{
		p=0;
		k=sqrt(j);
		for(m=1;m<=k;m++)
		{
			if(j%m==0) p++;
			else p=p;
		}
		if(p>1);
		else
		{
			a[i]=j;
			i++;
		}
		j++;
	}
	printf("%d\n",a[n]);
	return 0;
}
