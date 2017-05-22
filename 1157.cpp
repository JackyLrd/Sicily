#include <stdio.h>
int main(void)
{
	int a[50],b[40],c[40],d[40],e[40],f[40],n,i,j,k;
	i=1;
	j=1;
	a[1]=1;
	while(a[i]!=0)
	{
		scanf("%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i]);
		i++;
		j++;
	}
	for(i=1;i<=4;i++)
	{
		f[i]=0;
		if(b[i]>=c[i] && b[i]>=d[i] && b[i]>=e[i])
		{
			f[i]=b[i];
		}
		else if(c[i]>=b[i] && c[i]>=d[i] && c[i]>=e[i])
		{
			f[i]=c[i];
		}
		else if(d[i]>=b[i] && d[i]>=c[i] && d[i]>=e[i])
		{
			f[i]=d[i];
		}
		else if(e[i]>=b[i] && e[i]>=c[i] && e[i]>=d[i])
		{
			f[i]=e[i];
		}
		else f[i]=f[i];
	}
	for(i=1;i<=j;j++)
	{
		printf("%d\n",f[i]);
	}
	return 0;
}
