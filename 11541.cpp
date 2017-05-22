#include <stdio.h>
int main(void)
{
	int temp,i,j,k,m,n,a[500000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[j]);
		}
		temp=0;
		for(k=1;k<m;k++)
		{
			for(j=1;j<m;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				} 
				else;
			}
		}
		for(j=1;j<=m;j++)
		{
			printf("%d\n",a[j]);
		}
	}
	return 0;
}
